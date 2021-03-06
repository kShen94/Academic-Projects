%Takes the normal form equation and separates it into its components:
%Variable, Coefficient, Exponent.
splitToTerms(Result,Var,Coeff,Exp,Output):- atom_length(Var,L),
    sub_atom(Result,A,L,B,Var), C is A-1,
    sub_atom(Result,0,C,_,Coeff),Y is A+3,
    sub_atom(Result,Y,_,0,Exp) ,atom_concat(Coeff,'*',O1),
    atom_concat(O1,Var,O2), atom_concat(O2,'**',O3),atom_concat(O3,Exp,Output).

%Takes the polynomial and finds it's exponent
%if the Variable exists and exponent does not, exponent is 1.
findExp(Poly,Var,Exp):- sub_atom(Poly,A,_,B,Var), Y is A+3,
    sub_atom(Poly,Y,_,0,Exp); Exp is 1.

%if the exponent does not exist, it is 0.
findExp(Poly,Var,Exp):- Exp is 0.

%Takes the polynomial and find the coefficent.
%if the variable does not exist, the coefficent is the polynomial.
findCoeff(Poly,Var,Coeff):- sub_atom(Poly,A,_,B,Var)->sub_atom(Poly,0,A,_,Coeff);
Coeff = Poly.

%checks whether the inputed polynomial form and normal form are the same
transformed(Poly,Var,Result):- findExp(Poly,Var,Exp),findCoeff(Poly,Var,Coeff),
    splitToTerms(Result,Var,Coeff,Exp,Output).

transformedTerms([],Var,[]).
transformedTerms([X|R],Var,[X1|R1]):- transformed(X,Var,X1),
    transformedTerms(R,Var,R1).

