int g_number = 0;

int main(int argc, char const *argv[]){
    char c = 'K';
    float a = 3.1;
    int custom_return_value = 31234;

    /* the inner scope between the following {...}*/
    for (int i = 0;i<1;i++){
        int inner_scope_var = 10;

        /* allowed manipulation of values */
        inner_scope_var++;
        a += 100.3;
        g_number = g_number + 1;
    } /* variables i and inner_scope_var are destroyed */

    /* allowed manipulation of values */
    a = a - 14.1;
    g_number += 3;
    // inner_scope_var++; /* Not allowed. variable was destroyed!!! */
    // i++; /* Not allowed. variable was destroyed!!! */

    return custom_return_value;
}
