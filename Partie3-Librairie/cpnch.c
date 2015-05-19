/*
 * copie les n premiers caractères de la chaîne src 
 * dans le tableau de caractère dst de taille dstsize
 * Renvoie la position du dernier caractère du tableau
 */
 
int cpnch(char * dst, size_t dstsize, const char * src, size_t n){
return -1; /* bouchon */
}

void testcpnch(void){
    CU_ASSERT_EQUAL(catch(tab,25,"hello",3),2);
}

int main(int argc, const char** argv)
{

    CU_initialize_registry();

    CU_pSuite suite = CU_add_suite("Test Fonctions", NULL, NULL);

    CU_add_test(suite, "fonction de test", test_cpnch);

    CU_basic_run_tests();

    return 0;

}
