       IDENTIFICATION DIVISION.
       PROGRAM-ID. QUIZ.
       DATA DIVISION.
       FILE SECTION.
       WORKING-STORAGE SECTION.
       01 STUDENTNUM PIC 9(10).
       01 STUDENTNAME PIC X(99).
       01 PRE PIC 9(2).
       01 MID PIC 9(2).
       01 FIN PIC 9(2).
       01 SEMGRADE PIC 9(2).
       01 CHOICE PIC X(1).
       01 GETCH PIC Z(1).
       SCREEN SECTION.
       01 CLEAR-SCREEN.
       02 BLANK SCREEN.
       PROCEDURE DIVISION.
       MAIN-PROCEDURE.
           MAINMENU.
               DISPLAY CLEAR-SCREEN.
               DISPLAY "[ MAIN MENU ]" AT 0338.
               DISPLAY "[A] SEMESTRAL GRADE" AT 0833.
               DISPLAY "[B] EQUIVALENT GRADE" AT 0933.
               DISPLAY "[C] EXIT" AT 1033.
               DISPLAY "CHOICE: " AT 1233.
               ACCEPT CHOICE AT 1241.

           EVALUATE TRUE
               WHEN CHOICE = "A"
                   PERFORM SEMESTRALGRADE
                   PERFORM MAINMENU
               WHEN CHOICE = "B"
                   PERFORM SEMESTRALGRADE
                   PERFORM MAINMENU
               WHEN CHOICE = "C"
                   PERFORM EQUIVALENTGRADE
                   PERFORM MAINMENU
               WHEN CHOICE = "D"
                   STOP RUN.


           SEMESTRALGRADE.
               DISPLAY CLEAR-SCREEN.
               DISPLAY "[ SEMESTRAL GRADE ] " AT 0335.
               DISPLAY "ENTER STUDENT NAME: " AT 0828.
               ACCEPT STUDENTNAME AT 0848.
               DISPLAY "ENTER STUDENT NUMBER: " AT 0928.
               ACCEPT STUDENTNAME AT 0950.
               DISPLAY "ENTER PRELIM GRADE: " AT 1133.
               ACCEPT PRE AT 1154.
               DISPLAY "ENTER MIDTERM GRADE: " AT 1233.
               ACCEPT MID AT 1254.
               DISPLAY "ENTER FINALS GRADE: " AT 1333.
               ACCEPT FIN AT 1354.

               COMPUTE SEMGRADE = (PRE * .3) + (MID * .3) + (FIN *.4).
               DISPLAY "YOUR SEMESTER GRADE IS "AT 1533 SEMGRADE AT 1556.
               DISPLAY "PRESS [ENTER] TO CONTINUE." AT 1733.
               ACCEPT GETCH AT 1759.

           EQUIVALENTGRADE.
               DISPLAY CLEAR-SCREEN.
               DISPLAY "[ EQUIVALENT GRADE ] " AT 0335.
               IF SEMGRADE >= 97 AND SEMGRADE <= 100
                   DISPLAY "YOUR EQUIVALENT GRADE IS 1.00" AT 1332
                   DISPLAY "PASSED!" AT 1442
               ELSE IF SEMGRADE >= 94 AND SEMGRADE <= 96
                   DISPLAY "YOUR EQUIVALENT GRADE IS 1.25" AT 1332
                   DISPLAY "PASSED!" AT 1442
               ELSE IF SEMGRADE >= 91 AND SEMGRADE <= 93
                   DISPLAY "YOUR EQUIVALENT GRADE IS 1.50" AT 1332
                   DISPLAY "PASSED!" AT 1442
               ELSE IF SEMGRADE >= 88 AND SEMGRADE <= 90
                   DISPLAY "YOUR EQUIVALENT GRADE IS 1.75" AT 1332
                   DISPLAY "PASSED!" AT 1442
               ELSE IF SEMGRADE >= 85 AND SEMGRADE <= 87
                   DISPLAY "YOUR EQUIVALENT GRADE IS 2.00" AT 1332
                   DISPLAY "PASSED!" AT 1442
               ELSE IF SEMGRADE >= 82 AND SEMGRADE <= 84
                   DISPLAY "YOUR EQUIVALENT GRADE IS 2.25" AT 1332
                   DISPLAY "PASSED!" AT 1442
               ELSE IF SEMGRADE >= 79 AND SEMGRADE <= 81
                   DISPLAY "YOUR EQUIVALENT GRADE IS 2.50" AT 1332
                   DISPLAY "PASSED!" AT 1442
               ELSE IF SEMGRADE >= 76 AND SEMGRADE <= 78
                   DISPLAY "YOUR EQUIVALENT GRADE IS 2.75" AT 1332
                   DISPLAY "PASSED!" AT 1442
               ELSE IF SEMGRADE = 75
                   DISPLAY "YOUR EQUIVALENT GRADE IS 3.00" AT 1332
                   DISPLAY "PASSED!" AT 1442
               ELSE
                   DISPLAY "YOUR EQUIVALENT GRADE IS 5.00" AT 1332
                   DISPLAY "FAILED!" AT 1442
               END-IF.

               DISPLAY "PRESS [ENTER] TO CONTINUE." AT 1633.
               ACCEPT GETCH AT 1659.
       END PROGRAM QUIZ.
