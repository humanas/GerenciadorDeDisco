typedef struct _inode {
    int id;
    char name[51];
    char ext[5];

    int address;
    int next_address;

    struct _inode * next;
} inode ;

typedef struct _block{
    int ind;
    int position;
    struct _block * next;
}block;

void flush() {
    while (getchar() != '\n');
}

void cleardisk(int disk[], int n) {
    for (int i = n-1; i>= 0; i--)
        disk[i] = 0;
}

void createfile(int disk[], int n, inode * first) {
    inode *newer = (inode*) malloc(sizeof(inode));
    puts("Qual o nome do arquivo?");
    scanf("%s", newer->name);
    flush();
    puts("Qual a extensão?");
    scanf("%s", newer->ext);
    flush();
    
}