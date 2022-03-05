       IDENTIFICATION DIVISION.
       PROGRAM-ID. 22-EVEN-NUM-FROM-1-TO-N.
       ENVIRONMENT DIVISION.
       INPUT-OUTPUT SECTION.
       FILE-CONTROL.
           SELECT FROM1TON-FILE
           ASSIGN TO "D:\Files\dat\from1ton.dat"
           ORGANIZATION IS LINE SEQUENTIAL.
       DATA DIVISION.
       FILE SECTION.
       FD FROM1TON-FILE.
       01 FROM1TON-REC.
           05 EVENBASENUM PIC 9(2).
           05 EVENNUM1 PIC 9(2).
       PROCEDURE DIVISION.
       MAIN-PROCEDURE.
           OPEN EXTEND FROM1TON-FILE.

           DISPLAY "ENTER N:".
           ACCEPT EVENNUM1.
           DISPLAY " ".

           PERFORM VARYING EVENBASENUM FROM 1 BY 1 UNTIL
               EVENBASENUM > EVENNUM1
           IF FUNCTION MOD(EVENBASENUM, 2) = 0 THEN
               DISPLAY EVENBASENUM
           END-PERFORM.

           WRITE FROM1TON-REC.
           CLOSE FROM1TON-FILE.
           STOP RUN.
       END PROGRAM 22-EVEN-NUM-FROM-1-TO-N.
