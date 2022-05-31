:- op(100,xfy,on).

find(FName1):-
    kids(3,List),
    kid(_,female,angela,_) on List,
    kid(_,female,mary,_) on List,
    kid(_,male,david,_) on List,
    kid(5,_,_,_) on List,
    kid(7,_,_,_) on List,
    kid(8,_,_,_) on List,
    kid(X,_,_,leung) on List,
    Y is X+3,
    kid(Y,_,_,grant) on List,
    kid(_,_,_,diamond) on List, display(List).


kids(0,[]).
kids(N,[kid(_,_,_,_)|List]):- N>0, N1 is N-1, kids(N1,List).
X on List :- member(X,List).
