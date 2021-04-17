#pragma warning (disable:4996)

/*
* Created by CppBuzz
* Modified by Rizky Khapidsyah
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    printf("==============================================\n");
    printf("Bagian 1 - Function: \"isalpha\" dalam <ctype.h>\n");
    printf("==============================================\n\n");

    int i = 0;
    char strIsAlpha[] = "RizkyKhapidsyah+-?7";

    printf("Kata yang di proses : %s\n\nHasil : \n\n", strIsAlpha);

    while (strIsAlpha[i]) {
        if (isalpha(strIsAlpha[i])) {
            printf("Karakter %c is bersifat abjad (alphabetic)\n", strIsAlpha[i]);
        } else {
            printf("Karakter %c bukan bersifat abjad (non alphabetic)\n", strIsAlpha[i]);
        }

        i++;
    }

    puts("\n");
    
    printf("==============================================\n");
    printf("Bagian 2 - Function: \"isblank\" dalam <ctype.h>\n");
    printf("==============================================\n\n");

    char c;
    int j = 0;
    char strIsBlank[] = "Ini adalah contoh kalimat\n";

    printf("Kalimat yang diproses  = %s\n\nHasil :\n", strIsBlank);

    while (strIsBlank[j]) {
        c = strIsBlank[j]; 

        if (isblank(c)) {
            c = '\n';
        }
        
        putchar(c);
        j++;
    }

    puts("\n");

    printf("==============================================\n");
    printf("Bagian 3 - Function: \"iscntrl\" dalam <ctype.h>\n");
    printf("==============================================\n\n");
    
    int k = 0;
    char strIsCntrl[] = "baris pertama \n baris kedua \n";

    printf("Kalimat yang diproses  = %s\n\nHasil :\n", strIsCntrl);

    while (!iscntrl(strIsCntrl[k])) {
        putchar(strIsCntrl[k]);
        k++;
    }

    puts("\n");

    printf("==============================================\n");
    printf("Bagian 4 - Function: \"isdigit\" dalam <ctype.h>\n");
    printf("==============================================\n\n");
    printf("Contoh 1 : \n\n");

    char strIsDigit[] = "1991riky";
    int year;

    printf("Kata yang diproses adalah = \'%s\'\n\nHasil :\n", strIsDigit);

    if (isdigit(strIsDigit[0])) {
        year = atoi(strIsDigit); //atoi = Convert String to Integer, terdapat pada library <stdlib.h>
        printf("Tahun setelah %d adalah %d.\n", year, year + 1);
    }

    puts("\nContoh 2 : \n");

    char chr1 = { '\t' }, chr2 = ('1'), chr3 = ('a'), chr4 = ('B'), chr5 = ('?');

    /*bernilai 0 jika salah, dan bernilai selain 0 jika benar*/
    printf("apakah karakter chr1 berupa angka? %d\n", isdigit(chr1));//salah
    printf("apakah karakter chr2 berupa angka? %d\n", isdigit(chr2));//benar
    printf("apakah karakter chr3 berupa angka? %d\n", isdigit(chr3));//salah
    printf("apakah karakter chr4 berupa angka? %d\n", isdigit(chr4));//salah
    printf("apakah karakter chr5 berupa angka? %d\n", isdigit(chr5));//salah

    puts("\n");

    printf("==============================================\n");
    printf("Bagian 5 - Function: \"isgraph\" dalam <ctype.h>\n");
    printf("==============================================\n\n");

    puts("Contoh 1 : \n\n");

    FILE* pFile_IsGraph;
    int c_IsGraph;

    pFile_IsGraph = fopen("fileSaya.txt", "r");

    if (pFile_IsGraph) {
        do {
            c_IsGraph = fgetc(pFile_IsGraph);
            
            if (isgraph(c_IsGraph)) {
                putchar(c_IsGraph);
            }

        } while (c_IsGraph != EOF);

        fclose(pFile_IsGraph);
    }

    puts("Contoh 2 : \n\n");

    char var1 = 'r';
    char var2 = ' ';
    char var3 = '7';

    printf("Karakter yang di proses adalah \'%c\', \'%c\', \'%c\'.\n\nHasilnya : \n\n", var1, var2, var3);

    if (isgraph(var1)) {
        printf("var1 = |%c| dapat dicetak\n", var1);
    } else {
        printf("var1 = |%c| tidak dapat dicetak\n", var1);
    }

    if (isgraph(var2)) {
        printf("var2 = |%c| dapat dicetak\n", var2);
    } else {
        printf("var2 = |%c| tidak dapat dicetak\n", var2);
    }
      
    if (isgraph(var3)) {
        printf("var3 = |%c| dapat dicetak\n", var3);
    } else {
        printf("var3 = |%c| tidak dapat dicetak\n", var3);
    }

    puts("\nContoh 3 : \n\n");

    int i_isGraph;

    printf("Pada bahasa C, semua karakter yang terdapat dalam bahasa tersebut adalah : \n");

    for (i_isGraph = 0; i_isGraph <= 127; ++i_isGraph) {
        if (isgraph(i_isGraph) != 0) {
            printf("%c ", i_isGraph);
        }
    }
 
    puts("\n");

    printf("==============================================\n");
    printf("Bagian 6 - Function: \"islower\" dalam <ctype.h>\n");
    printf("==============================================\n\n");
 
    int i_islower = 0;
    char str_islower[] = "Testing Sebuah String.\n";
    char c_islower;

    printf("\nKarakter yang diproses adalah : %s\n\nHasil : \n\n", str_islower);

    while (str_islower[i_islower]) {
        c_islower = str_islower[i_islower];

        if (islower(c_islower)) {
            c_islower = toupper(c_islower);
        }

        putchar(c_islower);
        i_islower++;
    }
    
    puts("\n");

    printf("==============================================\n");
    printf("Bagian 7 - Function: \"isprint\" dalam <ctype.h>\n");
    printf("==============================================\n\n");

    int i_isPrint = 0;
    char str_isPrint[] = "Baris Pertama \n Baris Kedua \n";

    printf("\nKarakter yang diproses adalah : %s\n\nHasil : \n\n", str_isPrint);

    while (isprint(str_isPrint[i_isPrint])) {
        putchar(str_isPrint[i_isPrint]);
        i_isPrint++;
    }

    puts("\n");

    printf("==============================================\n");
    printf("Bagian 8 - Function: \"ispunct\" dalam <ctype.h>\n");
    printf("==============================================\n\n");

    int i_isPunct = 0;
    int cx_isPunct = 0;
    char str_isPunct[] = "Halo, Selamat datang disini!";

    while (str_isPunct[i_isPunct]) {
        if (ispunct(str_isPunct[i_isPunct])) {
            cx_isPunct++;
        }

        i_isPunct++;
    }

    printf("Kalimat berisi %d karakter punctuation, yaitu .\n", cx_isPunct);
  
    puts("\n");

    printf("==============================================\n");
    printf("Bagian 9 - Function: \"isspace\" dalam <ctype.h>\n");
    printf("==============================================\n\n");

    char c_isSpace;
    int i_isSpace = 0;
    char str_isSpace[] = "Contoh kalimat untuk mencoba fungsi isspace\n";

    printf("\nKalimat yang diproses adalah : %s\n\nHasil : \n\n", str_isSpace);

    while (str_isSpace[i_isSpace]) {
        c_isSpace = str_isSpace[i_isSpace];

        if (isspace(c_isSpace)) {
            c_isSpace = '\n';
        }

        putchar(c_isSpace);
        i_isSpace++;
    }

    puts("\n");

    printf("===============================================\n");
    printf("Bagian 10 - Function: \"isupper\" dalam <ctype.h>\n");
    printf("===============================================\n\n");

    int i_isUpper = 0;
    char str_isUpper[] = "StRiNg yAnG dIcObA uNTuK fuNgSi iSuPpEr.\n";
    char c_isUpper;

    printf("\nKalimat yang diproses adalah : %s\n\nHasil : \n\n", str_isUpper);
    
    while (str_isUpper[i_isUpper]){
        c_isUpper = str_isUpper[i_isUpper];
        
        if (isupper(c_isUpper)) {            
            c_isUpper = tolower(c_isUpper);
        }

        putchar(c_isUpper);
        i_isUpper++;
    }

    puts("\n");

    printf("===============================================\n");
    printf("Bagian 11 - Function: \"isxdigit\" dalam <ctype.h>\n");
    printf("===============================================\n\n");

    char str_isXdigit[] = "ffff";
    long int number_isXdigit;

    printf("\nDigit yang diperiksa adalah : %s\n\nHasil : \n\n", str_isXdigit);

    if (isxdigit(str_isXdigit[0])) {
        number_isXdigit = strtol(str_isXdigit, NULL, 16);
        printf("Angka hexadesimal %lx adalah %ld.\n", number_isXdigit, number_isXdigit);
    }

    puts("\n");

    printf("================================================\n");
    printf("Bagian 12 - Function: \"tolower\" dalam <ctype.h>\n");
    printf("================================================\n\n");

    int i_toLower = 0;
    char str_toLower[] = "KALIMAT YANG DIPROSES MENGGUNAKAN FUNGSI TOLOWER.\n";
    char c_toLower;

    printf("\nKalimat yang diproses adalah : %s\n\nHasil : \n\n", str_toLower);

    while (str_toLower[i_toLower]) {
        c_toLower = str_toLower[i_toLower];
        putchar(tolower(c_toLower));
        i_toLower++;
    }

    puts("\n");

    printf("================================================\n");
    printf("Bagian 13 - Function: \"toupper\" dalam <ctype.h>\n");
    printf("================================================\n\n");

    int i_toUpper = 0;
    char str_toUpper[] = "kalimat yang diproses menggunakan fungsi toupper.\n";
    char c_toUpper;
    
    printf("\nKalimat yang diproses adalah : %s\n\nHasil : \n\n", str_toUpper);

    while (str_toUpper[i_toUpper]) {
        c_toUpper = str_toUpper[i_toUpper];
        putchar(toupper(c_toUpper));
        i_toUpper++;
    }

    _getch();
    return 0;
}