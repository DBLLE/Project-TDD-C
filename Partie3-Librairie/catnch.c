/*
 * ajoute les n premiers caractères de la chaîne src à la fin 
 * de la chaîne contenue dans le tableau de caractère dst de taille dstsize
 * Renvoie la position à laquelle la chaîne de caractère concaténée commence
 */
 
int catnch(char * dst, size_t dstsize, const char * src, size_t n){
return -1; /* bouchon */
}

void testcatnch(void){
    CU_ASSERT_EQUAL(catch(tab,25,"hello world",5),4);
}

int main(int argc, const char** argv)
{

    CU_initialize_registry();

    CU_pSuite suite = CU_add_suite("Test Fonctions", NULL, NULL);

    CU_add_test(suite, "fonction de test", test_catnch);

    CU_basic_run_tests();

    return 0;

}
