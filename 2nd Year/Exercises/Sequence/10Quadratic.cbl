       IDENTIFICATION DIVISION.
       PROGRAM-ID. 10-QUADRATIC-EQUATION.
       DATA DIVISION.
       FILE SECTION.
       WORKING-STORAGE SECTION.
       01 QUADA PIC 9(1).
       01 QUADB PIC 9(1).
       01 QUADC PIC 9(1).
       01 QUADD PIC 9(2).
       01 ROOT1 PIC S9(2)V9(2).
       01 ROOT2 PIC S9(2)V9(2).
       PROCEDURE DIVISION.
       MAIN-PROCEDURE.
           DISPLAY "ENTER A:".
           ACCEPT QUADA.
           DISPLAY "ENTER B:".
           ACCEPT QUADB.
           DISPLAY "ENTER C:".
           ACCEPT QUADC.

           COMPUTE QUADD = (QUADB * QUADB) - (4 * QUADA * QUADC).
           COMPUTE ROOT1 = (-QUADB + FUNCTION SQRT(QUADD)) / (2 * QUADA).
           COMPUTE ROOT2 = (-QUADB - FUNCTION SQRT(QUADD)) / (2 * QUADA).

           DISPLAY "THE ROOTS OF " QUADA "X^2 " QUADB "X " QUADC " ARE".
           DISPLAY ROOT1 " AND " ROOT2.
       END PROGRAM 10-QUADRATIC-EQUATION.