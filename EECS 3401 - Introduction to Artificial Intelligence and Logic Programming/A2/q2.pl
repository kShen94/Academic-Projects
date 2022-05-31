:- op(700,xfy,>).
:- op(800,xfy,?).
% | is predefined as xfy with precedence 1100
:- op(1120,xfy,$).

A-A-0 :- primAct(A).
(A > P)-A-P :- primAct(A).
(P1 ? P2)-A-PR :- P1-A-PR ; P2-A-PR.
(P1 | P2)-A-(P1R | P2) :- P1-A-P1R.
(P1 | P2)-A-(P1 | P2R) :- P2-A-P2R.
(P1 $ P2)-A-(P1R $ P2R) :- P1-A-P1R, P2-A-P2R.
PN-A-PR :- defproc(PN,PB), PB-A-PR.

final(0).
final(P1 ? P2):- final(P1); final(P2).
final(P1 | P2):- final(P1), final(P2).
final(P1 $ P2):- final(P1), final(P2).
final(P):- defproc(P,B), final(B).


primAct(A).

%defproc(ProcName, Body).
defproc(iterDoSomething, doSomething > iterDoSomething ? 0).
