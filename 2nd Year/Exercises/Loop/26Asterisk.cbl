       IDENTIFICATION DIVISION.
       PROGRAM-ID. 26-ASTERISK.
       DATA DIVISION.
       FILE SECTION.
       WORKING-STORAGE SECTION.
       01 STARROWS PIC 9(1) VALUE 5.
       01 STARLINE PIC 9(1) VALUE 1.
       01 STARCUR PIC 9(1) VALUE 1.
       PROCEDURE DIVISION.
       MAIN-PROCEDURE.
           PERFORM DISPLAY-STAR VARYING STARLINE FROM 1 BY 1 UNTIL
               STARLINE > STARROWS.
           STOP RUN.

           DISPLAY-STAR.
               PERFORM UNTIL STARCUR > STARLINE
               DISPLAY "*" WITH NO ADVANCING
               ADD 1 TO STARCUR
               END-PERFORM.

               DISPLAY " ".
               SET STARCUR TO 1.
       END PROGRAM 26-ASTERISK.
