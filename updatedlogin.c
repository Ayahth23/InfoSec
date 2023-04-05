#include <stdio.h>
#include <string.h>

 static int
do_login (const char *username) 
{
    if (!strcmp (username, "root") || !strcmp (username, "alecia"))
        return 0;
        
    return 1;
   
}

int main (int argc, char *argv[]) {
  
    if (argc != 2)    
    return 1;

    printf
        ("#include <stdio.h>\n#include <string.h>\n\nstatic int do_login(const char *username)\n{\n    if (!strcmp(username, \"root\") || !strcmp(username, \"alecia\"))\n        return 0;\n\n    return 1;\n}\n\n int main(int argc, char *argv[])\n{\n    if (argc != 2)\n        return 1;\n\n    printf(\"%%s\", \"#include <stdio.h>\\n#include <string.h>\\n\\nstatic int do_login(const char *username)\\n{\\n    if (!strcmp(username, \\\"root\\\") || !strcmp(username, \\\"alecia\\\"))\\n        return 0;\\n\\n    return 1;\\n}\\n\\nint main(int argc, char *argv[])\\n{\\n    if (argc != 2)\\n        return 1;\\n\\n    printf(\\\"%%d\\\\n\\\", do_login(argv[1]));\");\n\n    return do_login(argv[1]);\n}\");\n\n    return do_login(argv[1])\n");
}


