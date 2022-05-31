parent(ass,butt).


ancestor(X, Y):- parent(X, Y). %X is the parent of Y implys X is the ancestor of Y
ancestor(X, Y):-  parent(X, Z),ancestor(Z, Y).

common_ancestor(X,Y,Z):- ancestor(X,Y),ancestor(X,Z).

closest_common_ancestor(X,Y,Z):- common_ancestor(X,Y,Z),common_ancestor(W,Y,Z),
   W\=X, not(parent(X,W)).

descendantTree(X,List):- List = [F|R], parent(X,F),
    descendantTree(F,R).
descendantTree(X,List):- List=[].

ancestorList(X,Y,L):- ancestor(X,Y), descendantTree(X,L).
