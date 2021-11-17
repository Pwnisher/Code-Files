       IDENTIFICATION DIVISION.
       PROGRAM-ID. 5-FARENHEIT-AND-CELSIUS.
       DATA DIVISION.
       FILE SECTION.
       WORKING-STORAGE SECTION.
       01 CELSIUS pic S9(2)V9(2).
       01 FARENHE pic 9(3)V9(2).
       PROCEDURE DIVISION.
       MAIN-PROCEDURE.
            DISPLAY "INPUT CELSIUS:".
            ACCEPT CELSIUS.

            COMPUTE FARENHE = CELSIUS * 9 / 5 + 32.
            DISPLAY "FARENHEIT: " FARENHE.
       END PROGRAM 5-FARENHEIT-AND-CELSIUS.
