/** ---------------------------------------------------------

EECS 3401 Assignment 3

Family name: Shen

Given name: Kevin

Student number: 212298535



---------------------------------------------------------- */

/* load the three search algorithms */
:- ensure_loaded('astar.pl').
:- ensure_loaded('astarCC.pl').
:- ensure_loaded('idastar.pl').

/* ------------------------------------------------------- */

/* successors( +State, -Neighbors)

   Neighbors is a list of elements (Cost, NewState) where
   NewState is a state reachable from State by one action and
   Cost is the cost for that corresponding action (=1 in our
   case)
*/

successors(State,Neighbors):- findall(NewState,moveleft(State,NewState);
                                       moveright(State,NewState);
                                       moveup(State,NewState);
                                       movedown(State,NewState)
                                       ,Neighbors).


moveleft(State, (1,NewState)):- length(State,X), S is round(sqrt(X)),
    nth1(I,State,b),
    I2 is I-1, nth1(I2,State,A), 0 is mod(I,S) -> fail;
    shiftleft(State,A,b,NewState).

moveright(State, (1,NewState)):- length(State,X), S is round(sqrt(X)),
    nth1(I,State,b),
    I2 is I+1, nth1(I2,State,A), 1 is mod(I,S) -> fail;
    shiftright(State,A,b,NewState).

moveup(State, (1,NewState)):- length(State,X), S is round(sqrt(X)),
    nth1(I,State,b), I2 is I+S, nth1(I2,State,A),shiftup(State,A,b,NewState).

movedown(State, (1,NewState)):- length(State,X), S is round(sqrt(X)),
    nth1(I,State,b), I2 is I-S, nth1(I2,State,A),shiftdown(State,A,b,NewState).

shiftdown(State,A,B,NewState):- append(Head,[A|Tail],State),
    append(Head2,[B|Tail2],Tail),append([Head,[B],Head2,[A],Tail2],NewState).

shiftup(State,A,B,NewState):- append(Head,[B|Tail],State),
    append(Head2,[A|Tail2],Tail),append([Head,[A],Head2,[B],Tail2],NewState).

shiftright(State,A,B,NewState):- append([Head,[A,B],Tail],State),
    append([Head,[B,A],Tail],NewState).

shiftleft(State,A,B,NewState):- append([Head,[B,A],Tail],State),
    append([Head,[A,B],Tail],NewState).


/* ------------------------------------------------------- */


/* equality(+S1, +S2)

   holds if and only S1 and S2 describe the same state
*/
equality(State1,State2):- State1 == State2.


/* ------------------------------------------------------- */

/* hfn_null( +State, -V)

   V is the null heuristic for State (=0 irrelevant of the state)
*/
hfn_null(_State, 4).



/* hfn_misplaced( +State, -V)

   V is the number of misplaced tiles in State
*/
hfn_misplaced( State, V) :-length(State,X), createGoal(X,Goal),
    misplaced(State,Goal,0,V).

misplaced([],[],Num,V):- V is Num.
misplaced(State,Goal,X,V):-
    State = [Head|Tail],Goal = [Head2| Tail2],
    (Head == Head2 -> X2 is X; X2 is X+1), misplaced(Tail,Tail2,X2,V).

/* hfn_manhattan( +State, -V)

   V is the sum over the manhattan distances between the current
   and the designated position of each tile
*/

hfn_manhattan(State, C ) :- mh(State,State,0,C).

mh(Initial,[],Num,C):- C is Num.
mh(Initial,Current,Num,C):- length(Initial,L), Current = [H|T], nth1(I,Initial,H),
    findX(I,H,L,X),findY(I,H,L,Y), D is Num+X+Y,
      mh(Initial,T,D,C).


findY(Index,Index2,Length,Y):- ((number(Index),number(Index2))-> Y1 is ceiling(Index/Length), Y2 is ceiling(Index2/Length), Y is abs(Y1-Y2));(Y is 0,true).
findX(Index,Index2,Length,X):- ((number(Index),number(Index2))->I1 is Index-1, I2 is Index2-1, X1 is mod(I1,Length),X2 is mod(I2,Length), X is abs(X1-X2));(X is 0,true).


/* ------------------------------------------------------- */

%init(Name, State).

   %State is the initial state for problem Name
init(a, [1,2,3,
         4,8,5,
         b,7,6]).

init(b, [8,2,6,
         4,1,5,
         b,7,3]).

init(c, [b,2,6,
         4,1,5,
         8,7,3]).

init(d, [1,2,3,4,
         5,6,7,8,
         9,10,b,15,
         13,12,11,14]).


/* ------------------------------------------------------- */

/* goal( +State )

   holds if and oly if State is a goal state
*/


goal(S) :- length(S,X), createGoal(X,S).

createGoal(X,L):- Z is X-1, numlist(1,Z,L1), append(L1,[b],L2), L = L2.

/* ------------------------------------------------------- */






/** ---------------------------------------------------------
  calling the search algorithms
  ---------------------------------------------------------- */

go(ProblemName, HFN) :-
	init(ProblemName, Init),
	astar(Init, successors, goal, HFN, Path, equality),
	writeln(Path).

goCC(ProblemName, HFN) :-
	init(ProblemName, Init),
	astarCC(Init, successors, goal, HFN, Path, equality),
	writeln(Path).

goIDA(ProblemName, HFN) :-
	init(ProblemName, Init),
	idastar(Init, successors, goal, HFN, Path, equality),
	writeln(Path).


