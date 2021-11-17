       IDENTIFICATION DIVISION.
       PROGRAM-ID. 19-TENDER-CHANGE-V2.
       DATA DIVISION.
       FILE SECTION.
       WORKING-STORAGE SECTION.
       01 ORDERNUMV2 PIC 9(10).
       01 ORDERAMOUNTV2 PIC 9(4).
       01 ORDERTENDERV2 PIC 9(4).
       01 ORDERCHANGEV2 PIC 9(4).
       PROCEDURE DIVISION.
       MAIN-PROCEDURE.
           DISPLAY "ORDER NUMBER:".
           ACCEPT ORDERNUMV2.
           DISPLAY "ORDER AMOUNT:".
           ACCEPT ORDERAMOUNTV2.
           DISPLAY "TENDER AMOUNT:".
           ACCEPT ORDERTENDERV2.

           COMPUTE ORDERCHANGEV2 = ORDERTENDERV2 - ORDERAMOUNTV2.

           IF ORDERAMOUNTV2 IS GREATER THAN ORDERTENDERV2
               DISPLAY "AMOUNT TENDER MUST BE GREATER THAN ORDER AMOUNT"
           ELSE
               DISPLAY "ORDER TOTAL   : P" ORDERAMOUNTV2
               DISPLAY "TENDER AMOUNT : P" ORDERTENDERV2
               DISPLAY "CHANGE        : P" ORDERCHANGEV2.
       END PROGRAM 19-TENDER-CHANGE-V2.