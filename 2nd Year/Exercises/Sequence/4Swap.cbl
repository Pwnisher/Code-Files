       IDENTIFICATION DIVISION.
       PROGRAM-ID. 4-Swap-Numbers.
       DATA DIVISION.
       FILE SECTION.
       WORKING-STORAGE SECTION.
       01 SWAPNUM1 pic 9(2).
       01 SWAPNUM2 pic 9(2).
       01 SWAPNUM3 pic 9(2).
       PROCEDURE DIVISION.
       MAIN-PROCEDURE.
            DISPLAY "INPUT NUM1".
            ACCEPT SWAPNUM1.
            DISPLAY "INPUT NUM2".
            ACCEPT SWAPNUM2.

            MOVE SWAPNUM1 TO SWAPNUM3.
            MOVE SWAPNUM2 TO SWAPNUM1.
            MOVE SWAPNUM3 TO SWAPNUM2.

            DISPLAY "NUM1 IS " SWAPNUM1.
            DISPLAY "NUM2 IS " SWAPNUM2.
       END PROGRAM 4-Swap-Numbers.
