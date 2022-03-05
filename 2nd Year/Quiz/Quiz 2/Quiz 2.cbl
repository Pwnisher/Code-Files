       IDENTIFICATION DIVISION.
       PROGRAM-ID. QUIZ-2.
       DATA DIVISION.
       FILE SECTION.
       WORKING-STORAGE SECTION.
      **************************************
       01 CHOICE PIC X(1).
       01 GETCH PIC X(1).
      **************************************
       01 RADIUS PIC 9(2).
       01 PI PIC 9(1)V9(2) VALUE 3.14.
       01 VOLUME PIC 9(4)V9(2).
       01 VOLUMEDISP PIC 999.99.
      **************************************
       01 KM PIC 9(2).
       01 MILES PIC 9(2)V9(2).
       01 MILESDIS PIC 99.99.
      **************************************
       01 NUM1 PIC 99.
       01 NUM2 PIC 9.
       01 QUO PIC 99.
       01 REM PIC 9.
      **************************************
       SCREEN SECTION.
           01 CLEAR-SCREEN.
           02 BLANK SCREEN.
       PROCEDURE DIVISION.
       MAIN-PROCEDURE.
           MAINMENU.
               DISPLAY CLEAR-SCREEN.
               DISPLAY "MAIN MENU" AT 0115.
               DISPLAY "A - CALCULATE THE VOLUME OF SPHERE" AT 0305.
               DISPLAY "B - CONVERT KM/HR TO MILES/HR" AT 0405.
               DISPLAY "C - COMPUTE FOR QUOTIENT AND REMAINDER" AT 0505.
               DISPLAY "D - EXIT" AT 0605.
               DISPLAY "SELECTION: " AT 0805.
               DISPLAY "MADE BY: MARK ANGELO DECENA" AT 1005.
               ACCEPT CHOICE AT 0816.

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
               DISPLAY "VOLUME OF SPHERE" AT 0105.
               DISPLAY "ENTER RADIUS: " AT 0305.
               ACCEPT RADIUS AT 0319.

               COMPUTE VOLUME = 4 * (RADIUS ** 3 * PI) / 3.
               MOVE VOLUME TO VOLUMEDISP.

               DISPLAY "THE VOLUME OF SPHERE IS " AT 0505.
               DISPLAY VOLUMEDISP AT 0529.
               DISPLAY "PRESS ENTER TO CONTINUE..." AT 0905.
               ACCEPT GETCH AT 0931.
               PERFORM MAINMENU.

           QUIZ-B.
               DISPLAY CLEAR-SCREEN.
               DISPLAY "KILOMETER TO MILES" AT 0105.
               DISPLAY "ENTER KILOMETER: " AT 0305.
               ACCEPT KM AT 0322.

               COMPUTE MILES = KM * 0.62.
               MOVE MILES TO MILESDIS.

               DISPLAY KM AT 0505 " KM/HR IS " AT 0507 MILESDIS AT 0517.
               DISPLAY " MILES/HR" AT 0522.
               DISPLAY "PRESS ENTER TO CONTINUE..." AT 0905.
               ACCEPT GETCH AT 0931.
               PERFORM MAINMENU.

           QUIZ-C.
               DISPLAY CLEAR-SCREEN.
               DISPLAY "QUOTIENT AND REMAINDER" AT 0105.
               DISPLAY "ENTER TWO NUMBERS:" AT 0305.
               DISPLAY "1ST NUMBER: " AT 0405.
               ACCEPT NUM1 AT 0417.
               DISPLAY "2ND NUMBER: " AT 0505.
               ACCEPT NUM2 AT 0517.

               DIVIDE NUM1 BY NUM2 GIVING QUO REMAINDER REM.

               DISPLAY "THE QUOTIENT IS " AT 0705 QUO AT 0721.
               DISPLAY "THE REMAINDER IS " AT 0805 REM AT 0822.
               DISPLAY "PRESS ENTER TO CONTINUE..." AT 0905.
               ACCEPT GETCH AT 0931.
               PERFORM MAINMENU.
       END PROGRAM QUIZ-2.
