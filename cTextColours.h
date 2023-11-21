#include <stdio.h>
#include <string.h>

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"
#define BLK   "\e[0;30m"

// Bold:
#define B_RED   "\e[1;31m"
#define B_GRN   "\e[1;32m"
#define B_YEL   "\e[1;33m"
#define B_BLU   "\e[1;34m"
#define B_MAG   "\e[1;35m"
#define B_CYN   "\e[1;36m"
#define B_WHT   "\e[1;37m"
#define B_BLK   "\e[1;30m"

// Underline:
#define U_RED   "\e[4;31m"
#define U_GRN   "\e[4;32m"
#define U_YEL   "\e[4;33m"
#define U_BLU   "\e[4;34m"
#define U_MAG   "\e[4;35m"
#define U_CYN   "\e[4;36m"
#define U_WHT   "\e[4;37m"
#define U_BLK   "\e[4;30m"

// Background
#define BG_RED   "\e[41m"
#define BG_GRN   "\e[42m"
#define BG_YEL   "\e[43m"
#define BG_BLU   "\e[44m"
#define BG_MAG   "\e[45m"
#define BG_CYN   "\e[46m"
#define BG_WHT   "\e[47m"
#define BG_BLK   "\e[40m"

// High Intesnty
#define HI_BLK   "\e[0;90m"
#define HI_RED   "\e[0;91m"
#define HI_GRN   "\e[0;92m"
#define HI_YEL   "\e[0;93m"
#define HI_BLU   "\e[0;94m"
#define HI_MAG   "\e[0;95m"
#define HI_CYN   "\e[0;96m"
#define HI_WHT   "\e[0;97m"

// Bold High Intesnty
#define BHI_BLK   "\e[1;90m"
#define BHI_RED   "\e[1;91m"
#define BHI_GRN   "\e[1;92m"
#define BHI_YEL   "\e[1;93m"
#define BHI_BLU   "\e[1;94m"
#define BHI_MAG   "\e[1;95m"
#define BHI_CYN   "\e[1;96m"
#define BHI_WHT   "\e[1;97m"

// Background High Intesnty
#define BGHI_BLK   "\e[0;100m"
#define BGHI_RED   "\e[0;101m"
#define BGHI_GRN   "\e[0;102m"
#define BGHI_YEL   "\e[0;103m"
#define BGHI_BLU   "\e[0;104m"
#define BGHI_MAG   "\e[0;105m"
#define BGHI_CYN   "\e[0;106m"
#define BGHI_WHT   "\e[0;107m"

// coloured text print(Note: Works Better With Sprintf();)
void TC_clr(){
    printf(WHT"",RESET);
    printlnc("","RESET");

}
void printlnc(char targ[], char colour[], ...){
    // Note: Cant Use Switch Statements Because Its Not a Numeral Value!
    if (strcmp(colour,"RESET")==0)
    {
       printf(RESET"%s", targ,RESET"\n");
    }

    if (strcmp(colour,"RED")==0)
    {
       printf(RED"%s", targ,RESET"\n");
       TC_clr();
    }
    else if (strcmp(colour,"GREEN")==0)
    {
        printf(GRN"%s", targ,RESET"\n");
        TC_clr();
    }
    else if (strcmp(colour,"YELLOW")==0)
    {
        printf(YEL"%s", targ,RESET"\n");
        TC_clr();
    }
    else if (strcmp(colour,"BLUE")==0)
    {
        printf(BLU"%s", targ,RESET"\n");
        TC_clr();
    }
    else if (strcmp(colour,"MAGENTA")==0||strcmp(colour,"PURPLE")==0)
    {
        printf(MAG"%s", targ,RESET"\n");
        TC_clr();
    }
    else if (strcmp(colour,"CYAN")==0)
    {
        printf(CYN"%s", targ,RESET"\n");
        TC_clr();
    }
    else if (strcmp(colour,"WHITE")==0)
    {
        printf(WHT"%s", targ,RESET"\n");
        TC_clr();
    }
    else if (strcmp(colour,"BLACK")==0||strcmp(colour,"GREY")==0||strcmp(colour,"GRAY")==0)
    {
        printf(BLK"%s", targ,RESET"\n");
        TC_clr();
    }

    // Bold: 
        if (strcmp(colour,"B_RED")==0)
    {
       printf(B_RED"%s", targ,RESET"\n");
       TC_clr();
    }
    else if (strcmp(colour,"B_GREEN")==0)
    {
        printf(B_GRN"%s", targ,RESET"\n");
        TC_clr();
    }
    else if (strcmp(colour,"B_YELLOW")==0)
    {
        printf(B_YEL"%s", targ,RESET"\n");
        TC_clr();
    }
    else if (strcmp(colour,"B_BLUE")==0)
    {
        printf(B_BLU"%s", targ,RESET"\n");
        TC_clr();
    }
    else if (strcmp(colour,"B_MAGENTA")==0||strcmp(colour,"B_PURPLE")==0)
    {
        printf(B_MAG"%s", targ,RESET"\n");
        TC_clr();
    }
    else if (strcmp(colour,"B_CYAN")==0)
    {
        printf(B_CYN"%s\n", targ,RESET);
        TC_clr();
    }
    else if (strcmp(colour,"B_WHITE")==0)
    {
        printf(B_WHT"%s\n", targ,RESET);
        TC_clr();
    }
    else if (strcmp(colour,"B_BLACK")==0||strcmp(colour,"B_GREY")==0||strcmp(colour,"B_GRAY")==0)
    {
        printf(B_BLK"%s\n", targ,RESET);
        TC_clr();
    }


     if (strcmp(colour,"U_RED")==0)
    {
       printf(U_RED"%s\n", targ,RESET);
       TC_clr();
    }
    else if (strcmp(colour,"U_GREEN")==0) 
    {
        printf(U_GRN"%s\n", targ,RESET);
        TC_clr();
    }
    else if (strcmp(colour,"U_YELLOW")==0)
    {
        printf(U_YEL"%s\n", targ,RESET);
        TC_clr();
    }
    else if (strcmp(colour,"U_BLUE")==0)
    {
        printf(U_BLU"%s\n", targ,RESET);
        TC_clr();
    }
    else if (strcmp(colour,"U_MAGENTA")==0||strcmp(colour,"U_PURPLE")==0)
    {
        printf(U_MAG"%s\n", targ,RESET);
        TC_clr();
    }
    else if (strcmp(colour,"U_CYAN")==0)
    {
        printf(U_CYN"%s\n", targ,RESET);
        TC_clr();
    }
    else if (strcmp(colour,"U_WHITE")==0)
    {
        printf(U_WHT"%s\n", targ,RESET);
        TC_clr();
    }
    else if (strcmp(colour,"U_BLACK")==0||strcmp(colour,"U_GREY")==0||strcmp(colour,"U_GRAY")==0)
    {
        printf(BLK"%s\n", targ,RESET);
        TC_clr();
    }

    if (strcmp(colour,"BG_RED")==0)
    {
       printf(BG_RED"%s\n", targ,RESET);
       TC_clr();
    }
    else if (strcmp(colour,"BG_GREEN")==0)
    {
        printf(BG_GRN"%s\n", targ,RESET);
        TC_clr();
    }
    else if (strcmp(colour,"BG_YELLOW")==0)
    {
        printf(BG_YEL"%s\n", targ,RESET);
        TC_clr();
    }
    else if (strcmp(colour,"BG_BLUE")==0)
    {
        printf(BG_BLU"%s\n", targ,RESET);
        TC_clr();
    }
    else if (strcmp(colour,"BG_MAGENTA")==0||strcmp(colour,"BG_PURPLE")==0)
    {
        printf(BG_MAG"%s\n", targ,RESET);
        TC_clr();
    }
    else if (strcmp(colour,"BG_CYAN")==0)
    {
        printf(BG_CYN"%s\n", targ,RESET);
        TC_clr();
    }
    else if (strcmp(colour,"BG_WHITE")==0)
    {
        printf(BG_WHT"%s\n", targ,RESET);
        TC_clr();
    }
    else if (strcmp(colour,"BG_BLACK")==0||strcmp(colour,"BG_GREY")==0||strcmp(colour,"BG_GRAY")==0)
    {
        printf(BG_BLK"%s\n", targ,RESET);
        TC_clr();
    }

    // High Intesnsty:
     if (strcmp(colour,"HI_RED")==0)
    {
       printf(HI_RED"%s\n", targ,RESET);
       TC_clr();
    }
    else if (strcmp(colour,"HI_GREEN")==0)
    {
        printf(HI_GRN"%s\n", targ,RESET);
        TC_clr();
    }
    else if (strcmp(colour,"HI_YELLOW")==0)
    {
        printf(HI_YEL"%s\n", targ,RESET);
        TC_clr();
    }
    else if (strcmp(colour,"HI_BLUE")==0)
    {
        printf(HI_BLU"%s\n", targ,RESET);
        TC_clr();
    }
    else if (strcmp(colour,"HI_MAGENTA")==0||strcmp(colour,"HI_PURPLE")==0)
    {
        printf(HI_MAG"%s\n", targ,RESET);
        TC_clr();
    }
    else if (strcmp(colour,"HI_CYAN")==0)
    {
        printf(HI_CYN"%s\n", targ,RESET);
        TC_clr();
    }
    else if (strcmp(colour,"HI_WHITE")==0)
    {
        printf(HI_WHT"%s\n", targ,RESET);
        TC_clr();
    }
    else if (strcmp(colour,"HI_BLACK")==0||strcmp(colour,"HI_GREY")==0||strcmp(colour,"HI_GRAY")==0)
    {
        printf(HI_BLK"%s\n", targ,RESET);
        TC_clr();
    }

    // Bold High Intensty:
    if (strcmp(colour,"BHI_RED")==0)
    {
       printf(BHI_RED"%s\n", targ,RESET);
       TC_clr();
    }
    else if (strcmp(colour,"BHI_GREEN")==0)
    {
        printf(BHI_GRN"%s\n", targ,RESET);
        TC_clr();
    }
    else if (strcmp(colour,"BHI_YELLOW")==0)
    {
        printf(BHI_YEL"%s\n", targ,RESET);
        TC_clr();
    }
    else if (strcmp(colour,"BHI_BLUE")==0)
    {
        printf(BHI_BLU"%s\n", targ,RESET);
        TC_clr();
    }
    else if (strcmp(colour,"BHI_MAGENTA")==0||strcmp(colour,"BHI_PURPLE")==0)
    {
        printf(BHI_MAG"%s\n", targ,RESET);
        TC_clr();
    }
    else if (strcmp(colour,"BHI_CYAN")==0)
    {
        printf(BHI_CYN"%s\n", targ,RESET);
        TC_clr();
    }
    else if (strcmp(colour,"BHI_WHITE")==0)
    {
        printf(BHI_WHT"%s\n", targ,RESET);
        TC_clr();
    }
    else if (strcmp(colour,"BHI_BLACK")==0||strcmp(colour,"BHI_GREY")==0||strcmp(colour,"BHI_GRAY")==0)
    {
        printf(BHI_BLK"%s\n", targ,RESET);
        TC_clr();
    }

    // High Intesty Background:

    if (strcmp(colour,"BGHI_RED")==0)
    {
       printf(BGHI_RED"%s\n", targ,RESET);
       TC_clr();
    }
    else if (strcmp(colour,"BGHI_GREEN")==0)
    {
        printf(BGHI_GRN"%s\n", targ,RESET);
        TC_clr();
    }
    else if (strcmp(colour,"BGHI_YELLOW")==0)
    {
        printf(BGHI_YEL"%s\n", targ,RESET);
        TC_clr();
    }
    else if (strcmp(colour,"BGHI_BLUE")==0)
    {
        printf(BGHI_BLU"%s\n", targ,RESET);
        TC_clr();
    }
    else if (strcmp(colour,"BGHI_MAGENTA")==0||strcmp(colour,"BGHI_PURPLE")==0)
    {
        printf(BGHI_MAG"%s\n", targ,RESET);
        TC_clr();
    }
    else if (strcmp(colour,"BGHI_CYAN")==0)
    {
        printf(BGHI_CYN"%s\n", targ,RESET);
        TC_clr();
    }
    else if (strcmp(colour,"BGHI_WHITE")==0)
    {
        printf(BGHI_WHT"%s\n", targ,RESET);
        TC_clr();
    }
    else if (strcmp(colour,"BGHI_BLACK")==0||strcmp(colour,"BGHI_GREY")==0||strcmp(colour,"BGHI_GRAY")==0)
    {
        printf(BGHI_BLK"%s\n", targ,RESET);
        TC_clr();
    }
}

