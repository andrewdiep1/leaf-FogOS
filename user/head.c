#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/fcntl.h"

int
coinflip()
{
  uint64 result = (timeframe() / 1000) % 10;

  printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n");
  printf("⣿⣿⣿⣿⣿⡿⢿⣿⣿⣿⣟⣛⣛⣛⣉⣉⣛⠛⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n");
  printf("⣿⣿⣿⣟⡵⠞⠉⠀⢈⣿⣿⣿⠿⠟⠛⠛⠛⠻⡆⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿\n");
  printf("⣿⣿⣿⣿⡀⣀⣠⣴⣿⣿⣿⠁⣶⣿⣿⣿⠿⠛⣡⡋⠹⣿⣿⣿⣿⣿⣿⣿⣿\n");
  printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⣤⣭⣥⣤⣶⣾⣿⣿⠀⣿⣿⣿⣿⣿⣿⣿⣿\n");
  printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣇⣾⣿⣿⣿⣿⣿⣿⣿⣿\n");
  printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n");
  printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠁⠈⠉⠉⢻⣿⡇⠀⠙⢿⣿⣿⣿⣿⣿\n");
  printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠿⠶⣶⣶⣿⣿⣿⣄⠀⠀⠈⢻⣿⣿⣿\n");
  printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⣤⣀⣀⡀⣹⡉⠙⠻⠀⠀⠀⠀⣿⣿⣿\n");
  printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⠀⠉⠉⠙⣿⡇⠀⠀⠀⠀⠀⠀⣿⣿⣿\n");
  printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠓⠶⠶⠤⣿⡇⠀⠀⠀⠀⠀⠀⠻⣿⣿⣿\n");
  printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣶⣤⣉⣁⣀⣀⡀⠀⠀⠀⠀⠀⠀⢸⣿\n");
  printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣶⣶⣶⣶⣶⣾⣿\n\n\n\n\n");

  sleep(10);
  printf("⣿⣿⣿⣿⣿⡿⢿⣿⣿⣿⣟⣛⣛⣛⣉⣉⣛⠛⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n");
  printf("⣿⣿⣿⣟⡵⠞⠉⠀⢈⣿⣿⣿⠿⠟⠛⠛⠛⠻⡆⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿\n");
  printf("⣿⣿⣿⣿⡀⣀⣠⣴⣿⣿⣿⠁⣶⣿⣿⣿⠿⠛⣡⡋⠹⣿⣿⣿⣿⣿⣿⣿⣿\n");
  printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⣤⣭⣥⣤⣶⣾⣿⣿⠀⣿⣿⣿⣿⣿⣿⣿⣿\n\n\n\n\n");
  sleep(10);
  printf("⣿⣿⣿⣿⣿⡿⢿⣿⣿⣿⣟⣛⣛⣛⣉⣉⣛⠛⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿\n");
  printf("⣿⣿⣿⣟⡵⠞⠉⠀⢈⣿⣿⣿⠿⠟⠛⠛⠛⠻⡆⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿\n");
  printf("⣿⣿⣿⣿⡀⣀⣠⣴⣿⣿⣿⠁⣶⣿⣿⣿⠿⠛⣡⡋⠹⣿⣿⣿⣿⣿⣿⣿⣿\n");
  printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⣤⣭⣥⣤⣶⣾⣿⣿⠀⣿⣿⣿⣿⣿⣿⣿⣿\n\n\n\n\n");
  sleep(10);

  if (result < 4) {
    printf(" /$$                                 /$$           /$$\n");
    printf("| $$                                | $$          | $$\n");
    printf("| $$$$$$$   /$$$$$$   /$$$$$$   /$$$$$$$  /$$$$$$$| $$\n");
    printf("| $$__  $$ /$$__  $$ |____  $$ /$$__  $$ /$$_____/| $$\n");
    printf("| $$  \\ $$| $$$$$$$$  /$$$$$$$| $$  | $$|  $$$$$$ |__/\n");
    printf("| $$  | $$| $$_____/ /$$__  $$| $$  | $$ \\____  $$    \n");
    printf("| $$  | $$|  $$$$$$$|  $$$$$$$|  $$$$$$$ /$$$$$$$/ /$$\n");
    printf("|__/  |__/ \\_______/ \\_______/ \\_______/|_______/ |__/\n\n\n\n\n");
    return 1;
  } else if (result < 8) {
    printf("   /$$               /$$ /$$           /$$\n");
    printf("  | $$              |__/| $$          | $$\n");
    printf(" /$$$$$$    /$$$$$$  /$$| $$  /$$$$$$$| $$\n");
    printf("|_  $$_/   |____  $$| $$| $$ /$$_____/| $$\n");
    printf("  | $$      /$$$$$$$| $$| $$|  $$$$$$ |__/\n");
    printf("  | $$ /$$ /$$__  $$| $$| $$ \\____  $$    \n");
    printf("  |  $$$$/|  $$$$$$$| $$| $$ /$$$$$$$/ /$$\n");
    printf("   \\___/   \\_______/|__/|__/|_______/ |__/\n\n\n\n\n");
    return -1;
  }

  printf("  /$$$$   /$$$$  /$$\n");
  printf(" /$$  $$ /$$  $$| $$\n");
  printf("    /$$/    /$$/| $$\n");
  printf("   /$$/    /$$/ |__/\n");
  printf("  |__/    |__/\n");
  printf("   /$$     /$$   /$$\n");
  printf("  |__/    |__/  |__/\n");
  printf("                    \n");
  printf("                    \n\n\n\n\n");
  printf("Oops! Looks like the coin got stuck in a quantum loop between heads and tails. Let's try flipping again and hope the universe makes up its mind this time!\n");
  return 0;
}

int main(int argc, char *argv[]) {
  if(argc > 1) {
    int verbose = 0;
    int num = 1; //1 = lines, 0 = bytes
    int flip = 0;
    int counter = -1; //number of bytes or lines

    //check for flags
    for(int i=1; i < argc; i++) {
      if(strcmp(argv[i], "-h") == 0) {
        printf("Calling head returns the first 10 lines of the first file found in the input arguments. Adding flags as arguments will modify the output.\n\n");
        printf("\tFlags:\n");
        printf("\t\t-n [num]\tInstead of returning the first 10 lines, return the first num amount of lines. This flag must have a number after it (max 1,000).\n\n");
        printf("\t\t-c [num]\tReturns the first num amount of bytes. This flag must have a number after it (max 10,000).\n\n");
        printf("\t\t-v\t\tDisplays the file name before displaying all the lines or bytes.\n\n");
        printf("\t\t-f\t\tFlips a coin that determines whether or not head will work or not. There is 40% chance for head to work properly.\n");
        return 0;
      } else if(strcmp(argv[i], "-c") == 0) {
        if(i + 1 < argc) {
          if(strcmp(argv[i+1], "0") == 0) {
            counter = 0;
            num = 0;
          } else {
            int numInput = atoi(argv[i+1]);

            if(numInput > 0 && numInput <= 10000) {
              counter = numInput;
              num = 0;
            } else {
              printf("ERROR: Number is required after '-c' flag and is limited to 10,000 characters\n");
              return 1;
            }

            i++;
          }
        } else {
          printf("ERROR: Number is required after '-c' flag\n");
          return 1;
        }
      } else if(strcmp(argv[i], "-n") == 0) {
        if(i + 1 < argc) {
          if(strcmp(argv[i+1], "0") == 0) {
            counter = 0;
            num = 1;
          } else {
            int numInput = atoi(argv[i+1]);

            if(numInput > 0 && numInput <= 1000) {
              counter = numInput;
              num = 1;
            } else {
              printf("ERROR: Number is required after '-n' flag and is limited to 1,000 lines\n");
              return 1;
            }

            i++;
          }
        } else {
          printf("ERROR: Number is required after '-n' flag\n");
          return 1;
        }
      } else if(strcmp(argv[i], "-v") == 0) {
        verbose = 1;
      } else if(strcmp(argv[i], "-f") == 0) {
        flip = 1;
      }
    }

    //default number of lines
    if(counter == -1) {
      counter = 10;
    }

    if(flip == 1) {
        int flipResult = coinflip();
        if (flipResult != 1) {
            if (flipResult == -1) printf("Try flipping again for heads!\n");
            return 0;
        }
    }

    //look for a file to read and display its contents depending on arguments given
    for(int i=1; i < argc; i++) {
      int fd = open(argv[i], O_RDONLY);

      if(fd >= 0) {
        char *buf;
        uint sz = 0;

        if(verbose == 1) {
          printf("==> %s <==\n", argv[i]);
        }

        if(num == 1 && counter > 0) { //for lines
          for(int i=0; i < counter; i++) {
            if(getline(&buf, &sz, fd) <= 0) {
              break;
            }

            printf("%s", buf);
          }
        } else if(counter > 0) { //for bytes
          int bytes = 0;

          while(counter > 0) {
            int lineBytes = getline(&buf, &sz, fd);

            bytes += lineBytes;

            if(lineBytes <= 0) {
              break;
            }

            for(int i=0; i < lineBytes && counter > 0 ; i++) {
              counter--;
              printf("%c", buf[i]);
            }
          }

          printf("\n");
        }

        free(buf);//free buffer

        break;//end after reading one file
      } else {
        if(strcmp(argv[i], "-c") == 0 || strcmp(argv[i], "-n") == 0) {
          i = i + 1;
        } else if(strcmp(argv[i], "-v") != 0 && strcmp(argv[i], "-f") != 0) {
          printf("ERROR: %s is not a file\n\n", argv[i]);
        }
      }
    }
  } else {
    printf("ERROR: Need arguments\n");
  }

  return 0;
}
