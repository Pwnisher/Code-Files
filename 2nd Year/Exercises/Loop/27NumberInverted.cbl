       IDENTIFICATION DIVISION.
       PROGRAM-ID. 27-INVERTED-TRIANGLE-NUMBERS.
       DATA DIVISION.
       FILE SECTION.
       WORKING-STORAGE SECTION.
       01 TRIROWS PIC 9(1) VALUE 6.
       01 TRILINE PIC 9(1) VALUE 1.
       01 TRICUR PIC 9(1) VALUE 5.
       01 NUMTRIANGLE PIC 9(1) VALUE 5.
       PROCEDURE DIVISION.
       MAIN-PROCEDURE.
           PERFORM DISPLAY-STAR VARYING TRILINE FROM 1 BY 1 UNTIL
               TRILINE = TRIROWS.
           STOP RUN.

           DISPLAY-STAR.
               PERFORM UNTIL TRICUR < TRILINE
               DISPLAY NUMTRIANGLE WITH NO ADVANCING
               SUBTRACT 1 FROM TRICUR
               END-PERFORM.

               DISPLAY " ".
               SET TRICUR TO 5.
               SUBTRACT 1 FROM NUMTRIANGLE.
       END PROGRAM 27-INVERTED-TRIANGLE-NUMBERS.
