/*
 * Ajoute la chaîne src à la fin de la chaîne contenue
 * dans le tableau de caractères dst de taille dstsize
 * Renvoie la position du premier caractère de la chaîne concaténée
 */

int catch(char * dst, size_t dstsize, const char * src) {
	
	char * final = (char *) malloc(1 + strlen(src)+ dstsize );
	strcpy(final, src);
	strcat(final dst);
	printf("%s", final);
	
	return dst;
}

void testcatch(void) {
    CU_ASSERT_EQUAL(catch(tab,25,"salut"),6);
}

int main(int argc, const char** argv)
{

    CU_initialize_registry();

    CU_pSuite suite = CU_add_suite("Test Fonctions", NULL, NULL);

    CU_add_test(suite, "fonction de test", test_catch);

    CU_basic_run_tests();

    return 0;
}
