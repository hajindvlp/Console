#include "Map.h"

void MapSelect() {

    int selected = 0;

    while(1) {
        if(getch() == '\033') {
            getch();
            switch(getch()) {
                case C: // right
                    if(selected > 0) selected--;
                    render(selected);
                    break;
                case D: // left
                    if(selected+1 < map.countriesNum) selected++;
                    render(selected);
                    break;
            }
        } else if(getch() == '\n') {
            startBattle(selected);
            break;
        }
    }
}

void MapRender(int selected) {

    char mapString[100001] = "##################################################################\n
#     #                                   #                      #\n
#      #                                 #                       #\n
#   @   #                               #                        #\n
#        #                    ##########                         #\n
#         #        C         #                                   #\n
############                #                                    #\n
#          #               #                                     #\n
#         #               #                                      #\n
#        #               #                                       #\n
#       # #             #                      A                 #\n
#          #           #                                         #\n
#           ############                                         #\n
#              #         #                                       #\n
#     E       #           #                                      #\n
#             #            #                                     #\n
#            #              #                                    #\n
#           #                ################################### #\n
#          #                #                                   ##\n
#         #                #                                     #\n
#         #       D       #                                      #\n
#         #              #                                       #\n
#         #             #                   B                    #\n
#        #             #                                         #\n
#       #             #                                          #\n
#      #              #                                          #\n
#     #               #                                          #\n
#     #               #                                          #\n
##################################################################\n"

    switch(selected) {
        case 1:
            mapString[9*69 + 46] = '[';
            mapString[9*69 + 46 + 2] = ']';
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
    }

    puts(mapString);

}