#include <stdio.h>
#include <string.h>

int main() {
    char command[50];
    printf("--- CLF Git OS Kernel Booted ---\n");
    printf("Type 'help' to see available commands.\n");

    while(1) {
        printf("CLF_OS >> ");
        scanf("%s", command);

        if(strcmp(command, "exit") == 0) {
            printf("Shutting down CLF Git OS...\n");
            break;
        } 
        else if(strcmp(command, "ver") == 0) {
            printf("CLF Git OS v1.0 [Full Stack Ground Zero Edition]\n");
        } 
        else if(strcmp(command, "help") == 0) {
            printf("\nAvailable Commands:\n");
            printf(" - help  : Show this list\n");
            printf(" - about : The vision of this OS\n");
            printf(" - ver   : Display OS version\n");
            printf(" - fetch : Show system info & logo\n");
            printf(" - exit  : Shutdown OS\n\n");
        }
        else if(strcmp(command, "about") == 0) {
            printf("\n--- THE HOLY GRAIL PROJECT ---\n");
            printf("Visi: Memahami teknologi dari pasir sehingga ke peranti di tangan.\n");
            printf("Misi: Menghapuskan jurang pengetahuan antara 'Benda Hidup' & 'Benda Mati'.\n");
            printf("Status: Jilid 3 (The Ghost in the Machine) sedang ditulis...\n");
            printf("Architect: Aiman Rafee\n\n");
        }
        else if(strcmp(command, "fetch") == 0) {
            printf("       _      ______ \n");
            printf("      | |    |  ____|\n");
            printf("  ____| |    | |__   \n");
            printf(" / ___| |    |  __|  \n");
            printf("| |___| |____| |     \n");
            printf(" \\____|______|_|     \n");
            printf("----------------------\n");
            printf("OS: CLF Git OS v1.0\n");
            printf("KERNEL: Custom 0.1a (Ground Zero)\n");
            printf("ARCH: Silicon-Nano (Simulated)\n");
            printf("HARDWARE: ASML 2nm Wafer-Base\n");
            printf("BUILDER: Aiman Rafee\n");
        } 
        else {
            printf("Error: Command '%s' not found. Type 'help' for list.\n", command);
        }
    }
    return 0;
}
