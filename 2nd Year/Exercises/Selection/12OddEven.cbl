       IDENTIFICATION DIVISION.
       PROGRAM-ID. 12-ODD-OR-EVEN.
       DATA DIVISION.
       FILE SECTION.
       WORKING-STORAGE SECTION.
       01 ODDOREVEN PIC 9(2).
       01 ODDEVEN PIC 9(2).
       01 DIVISOR PIC 9(2) VALUE 2.
       PROCEDURE DIVISION.
       MAIN-PROCEDURE.
            DISPLAY "INPUT NUM".
            ACCEPT ODDOREVEN.

            COMPUTE ODDEVEN = FUNCTION MOD (ODDOREVEN,DIVISOR).
            IF ODDEVEN = 1 THEN
                DISPLAY ODDOREVEN " IS ODD".
            IF ODDEVEN = 0 THEN
                DISPLAY ODDOREVEN " IS EVEN".
       END PROGRAM 12-ODD-OR-EVEN.
