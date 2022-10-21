       IDENTIFICATION DIVISION.
       PROGRAM-ID. 29-TENDER-CHANGE-V2.
       ENVIRONMENT DIVISION.
       INPUT-OUTPUT SECTION.
       FILE-CONTROL.
           SELECT TENDER-FILE
           ASSIGN TO "D:\Files\dat\tender.dat"
           ORGANIZATION IS LINE SEQUENTIAL.
       DATA DIVISION.
       FILE SECTION.
       FD TENDER-FILE.
       01 TENDER-REC.
           05 ORDERNUMV3 PIC 9(10).
           05 ORDERAMOUNTV3 PIC 9(4).
           05 ORDERTENDERV3 PIC 9(4).
           05 ORDERCHANGEV3 PIC 9(4).
           05 ORDERCOUNTV3 PIC 9(1).
           05 ITEMNAME PIC X(99).
           05 ITEMPRICE PIC 9(4).
       PROCEDURE DIVISION.
       MAIN-PROCEDURE.
           OPEN EXTEND TENDER-FILE.

           DISPLAY "ORDER NUMBER: ".
           ACCEPT ORDERNUMV3.
           DISPLAY "ITEM COUNT: ".
           ACCEPT ORDERCOUNTV3.

           PERFORM ORDERCOUNTV3 TIMES
               DISPLAY "ITEM NAME: "
               ACCEPT ITEMNAME
               DISPLAY "ITEM PRICE: "
               ACCEPT ITEMPRICE
               COMPUTE ORDERAMOUNTV3 = ORDERAMOUNTV3 + ITEMPRICE
           END-PERFORM.

           DISPLAY "TENDER AMOUNT: ".
           ACCEPT ORDERTENDERV3.

           COMPUTE ORDERCHANGEV3 = ORDERTENDERV3 - ORDERAMOUNTV3.

           DISPLAY "TENDER AMOUNT : P" ORDERTENDERV3.
           DISPLAY "TOTAL AMOUNT   : P" ORDERAMOUNTV3.
           DISPLAY "CHANGE        : P" ORDERCHANGEV3.

           WRITE TENDER-REC.
           CLOSE TENDER-FILE.
           STOP RUN.
       END PROGRAM 29-TENDER-CHANGE-V2.