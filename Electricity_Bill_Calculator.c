
#include <stdio.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);

    printf(" /░░░░    /░░░   /░░░░   /░ /░    /█▀▀▀/    /░░░░           /░░░░    /░░░    /░░░░    /█▀▀▀/\n");
    printf("│ ▒__/   │/_▒/  │_▒ /▒  │ ▒▒▒▒   │ ▓▓▓     │_▒ /▒          │ ▒__/   │_▒/▒   │_▒ /▒   │ ▓▓▓\n");
    printf("│ ▓       │ ▓   │ ▓▓▓/  │ ▓_/▓   │_▒_/     │ ▓▓▓/          │ ▓      │ ▓ ▓   │ ▓▓▓/   │_▒_/\n");
    printf("│ ████    /███  │ █_/   │ █│ █   │ ░░░░    │ █_/█          │ ████   │ ███   │ █_/█   │ ░░░░\n");
    printf("│/___/   │/__/  │//     │//│//   │/___/    │// //          │/___/   │/__/   │// //   │/___/\n");
    printf("                                                                                               ");
    printf("                                                  Dᴇᴠᴇʟᴏᴘᴇᴅ Bʏ Cʜɪᴘᴇʀ  • ᴠᴇʀsɪᴏɴ 1.0 • ᴄʜɪᴘᴇʀ ᴄᴏʀᴇ    ");
    printf("                                                                                             ");
    printf("                                                                                             ");
    printf("                                                                                             ");
    printf("                                                                                             ");
    printf("                                                                                             \n");


    printf("“This program calculates the electricity bill.”\n\n\n");

    int unit,a=50,b=50,c=100,amount;
    printf("Enter your Unit:");
    scanf("%d",&unit);

    if
        (unit < 0)
        printf("Invalid units");


    else if
        (unit <=50)
        {
            amount= unit* 5;
            printf("your Electricity Bill %d ",amount);
        }

    else if

        (unit <= 100 && unit >=51)
        {
            int amount1,amount2,amount3,amount4;
            amount1 = unit - 50;
            amount2 = amount1 * 7;
            amount3 = 50 * 5;
            amount4 = amount2 + amount3;
            printf("your Electricity Bill %d ",amount4);

        }

    else if

         (unit <= 200 && unit >=101)
        {
            int amount1,amount2,amount3,amount4,amount5;
            amount1 = unit - 100;
            amount2 = amount1 * 9;
            amount3 = 50 * 5;
            amount4 = 50 * 7;
            amount5 = amount2+amount3+amount4;

            printf("your Electricity Bill %d ",amount5);

        }
     else if

         (unit >= 201)
        {
            int amount1,amount2,amount3,amount4,amount5,amount6;
            amount1 = unit - 200;
            amount2 = amount1 * 12;
            amount3 = 50 * 5;
            amount4 = 50 * 7;
            amount5 = 100 * 9;
            amount6 = amount2+amount3+amount4+amount5;

            printf("your Electricity Bill %d ",amount6);

        }

    return 0;
}

