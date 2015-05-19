/*
 * Copie la chaîne src dans le tableau de caractères dst de taille dstsize
 * Renvoie la position du dernier caractère de la chaîne
 */
 
int cpch(char * dst, size_t dstsize, const char * src){
return -1; /* bouchon */
}

void test_cpch(void){
    CU_ASSERT_EQUAL(cpch(tab,20,"coucou"),5);
}

int main(int argc, const char** argv)
{

    CU_initialize_registry();

    CU_pSuite suite = CU_add_suite("Test Fonctions", NULL, NULL);

    CU_add_test(suite, "fonction de test", test_cpch);

    CU_basic_run_tests();

    return 0;

}
