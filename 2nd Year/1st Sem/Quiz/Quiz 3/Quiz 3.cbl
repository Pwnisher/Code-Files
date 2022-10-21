       IDENTIFICATION DIVISION.
       PROGRAM-ID. QUIZ-3.
       DATA DIVISION.
       FILE SECTION.
       WORKING-STORAGE SECTION.
       01 CHOICE PIC X(1).
       01 GETCH PIC X(1).
      ***************************
       01 VAR PIC 9(9).
       01 TOT PIC 9(9).
       01 DIV PIC 9(9).
       01 DISP PIC ZZZ.
       01 LIN PIC 99 VALUE 03.
       01 COLU PIC 99 VALUE 13.
      ***************************
       01 NUM1 PIC 999.
       01 NUM2 PIC 999.
       01 TEMP PIC 999.
      ***************************
       01 LIMITNUM PIC 9.
       01 STARTNUM PIC 9 VALUE 1.
       01 NUMSUM PIC 99.
       SCREEN SECTION.
           01 CLEAR-SCREEN.
           02 BLANK SCREEN.
       PROCEDURE DIVISION.
       MAIN-PROCEDURE.
       MAINMENU.
           DISPLAY CLEAR-SCREEN.
           DISPLAY "MAIN MENU - BY: MARK ANGELO DECENA" AT 0110.
           DISPLAY "A - PERFECT NUMBERS" AT 0310.
           DISPLAY "B - GCD OF TWO NUMBERS" AT 0410.
           DISPLAY "C - 1 + N" AT 0510.
           DISPLAY "D - EXIT" AT 0610.
           DISPLAY "SELECTION: " AT 0810.
           ACCEPT CHOICE AT 0821.

           EVALUATE TRUE
               WHEN CHOICE = "A"
                   PERFORM QUIZ-A
               WHEN CHOICE = "B"
                   PERFORM QUIZ-B
               WHEN CHOICE = "C"
                   PERFORM QUIZ-C
               WHEN CHOICE = "D"
                   STOP RUN.

       QUIZ-A.
           DISPLAY CLEAR-SCREEN.
           DISPLAY "PERFECT NUMBERS FROM 1 TO 500" AT 0110
           PERFORM VARYING VAR FROM 2 BY 1 UNTIL VAR > 500
               SET TOT TO 1
               PERFORM VARYING DIV FROM 2 BY 1 UNTIL DIV ** 2 > VAR
                   IF FUNCTION MOD(VAR, DIV) = 0 THEN
                       IF DIV ** 2 IS NOT = VAR THEN
                           COMPUTE TOT = TOT + DIV + VAR / DIV
                       ELSE
                           ADD DIV TO TOT
                   END-IF
               END-PERFORM
               IF TOT = VAR AND NOT = 1 THEN
                   MOVE TOT TO DISP
                   DISPLAY DISP AT LINE LIN COL COLU
                   ADD 1 TO LIN
               END-IF
           END-PERFORM.
           DISPLAY "PRESS ENTER TO CONTINUE..." AT 0710.
               ACCEPT GETCH AT 0736.
           PERFORM MAINMENU.

       QUIZ-B.
           DISPLAY CLEAR-SCREEN.
           DISPLAY "GCD OF TWO NUMBERS" AT 0110.
           DISPLAY "ENTER NUM1: " AT 0310.
           ACCEPT NUM1 AT 0322.
           DISPLAY "ENTER NUM2: " AT 0410.
           ACCEPT NUM2 AT 0422.

           IF NUM1 < NUM2
               MOVE NUM2 TO TEMP
               MOVE NUM1 TO NUM2
               MOVE TEMP TO NUM2
           END-IF

           PERFORM UNTIL NUM2 = 0
               MOVE NUM1 TO TEMP
               MOVE NUM2 TO NUM1
               DIVIDE TEMP BY NUM2 GIVING TEMP REMAINDER NUM2
           END-PERFORM

           DISPLAY "THE GREATEST COMMON DENOMINATOR IS " AT 0710
               NUM1 AT 0745.
           DISPLAY "PRESS ENTER TO CONTINUE..." AT 0910.
               ACCEPT GETCH AT 0936.
           PERFORM MAINMENU.

       QUIZ-C.
           DISPLAY CLEAR-SCREEN.
           DISPLAY "1 + N" AT 0110.
           DISPLAY "ENTER LIMIT: " AT 0310.
           ACCEPT LIMITNUM AT 0323.

           PERFORM UNTIL STARTNUM > LIMITNUM
               COMPUTE NUMSUM = NUMSUM + STARTNUM
               ADD 1 TO STARTNUM
           END-PERFORM.

           DISPLAY "THE TOTAL SUM IS: " AT 0510 NUMSUM AT 0528.
           DISPLAY "PRESS ENTER TO CONTINUE..." AT 0710.
               ACCEPT GETCH AT 0736.
           PERFORM MAINMENU.

       END PROGRAM QUIZ-3.
