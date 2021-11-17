       IDENTIFICATION DIVISION.
       PROGRAM-ID. 28-ASTERISK-DIAMOND.
       DATA DIVISION.
       FILE SECTION.
       WORKING-STORAGE SECTION.
       01 STARROWSV2 PIC 9(1) VALUE 5.
       01 STARLINEV2 PIC 9(1) VALUE 1.
       01 STARCURV2 PIC 9(1) VALUE 1.
       01 STARSPACE PIC 9(1) VALUE 5.
       01 TRIROWSV2 PIC 9(1) VALUE 6.
       01 TRILINEV2 PIC 9(1) VALUE 1.
       01 TRICURV2 PIC 9(1) VALUE 4.
       01 TRISPACE PIC 9(1) VALUE 4.
       PROCEDURE DIVISION.
       MAIN-PROCEDURE.
           PERFORM STARDISPLAYV2 VARYING STARLINEV2 FROM 1 BY 1 UNTIL
               STARLINEV2 > STARROWSV2.
           PERFORM TRIDISPLAYV2 VARYING TRILINEV2 FROM 1 BY 1 UNTIL
               TRILINEV2 = TRIROWSV2.
           STOP RUN.

           STARDISPLAYV2.
               PERFORM UNTIL STARCURV2 > STARLINEV2
                   IF FUNCTION MOD(STARCURV2, 2) = 1
                       PERFORM STARSPACE TIMES
                           DISPLAY " " WITH NO ADVANCING
                       END-PERFORM
                       PERFORM STARCURV2 TIMES
                           DISPLAY "*" WITH NO ADVANCING
                       END-PERFORM
                       SUBTRACT 1 FROM STARSPACE
                   END-IF

                   ADD 1 TO STARCURV2
                   DISPLAY " "
               END-PERFORM.

           TRIDISPLAYV2.
               PERFORM UNTIL TRICURV2 < TRILINEV2
                   IF FUNCTION MOD(TRICURV2, 2) = 1
                       PERFORM TRISPACE TIMES
                           DISPLAY " " WITH NO ADVANCING
                       END-PERFORM
                       PERFORM TRICURV2 TIMES
                           DISPLAY "*" WITH NO ADVANCING
                       END-PERFORM
                       ADD 1 TO TRISPACE
                   END-IF
                   SUBTRACT 1 FROM TRICURV2
                   DISPLAY " "
               END-PERFORM.
       END PROGRAM 28-ASTERISK-DIAMOND.
