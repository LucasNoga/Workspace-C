void ex50()
{
    int M, N, i, j;
    int **tab, **tab2;
    char nom[20], noml[20], c;

        puts("Entrez N");
        scanf("%d", &N);
        puts("Entrez M");
        scanf("%d", &M);
        tab = (int**)malloc(M*sizeof(int*));
        for(i = 0; i<M; i++)
        {
            tab[i] = (int*)malloc(N*sizeof(int));
        }
        tab2 = (int**)malloc(M*sizeof(int*));
        for(i = 0; i<M; i++)
        {
            tab2[i] = (int*)malloc(N*sizeof(int));
        }
        for(i=0; i<M; i++)
        {
            for(j=0; j<N; j++)
            {
                tab[i][j] = (2*i)+j;
                printf("%d ", tab[i][j]);
            }
            printf("\n");
        }
        puts("Nom du fichier ?");
        getchar();
        gets(nom);
        FILE* fich = NULL;
        fich= fopen(nom, "wb+");
     
         for(i=0; i<M; i++)
        {
            fwrite(tab[i],sizeof(int), N,  fich);
        }
        fclose(fich);


        puts("Nom du fichier à lire?");
        gets(noml);
        FILE* fichier = NULL;
        fichier = fopen(noml, "rb");
        printf("%s\n", noml);
       
        if(fichier != NULL)
        {
            for(i=0; i<M; i++)
            {
                fread(tab2[i], sizeof(int), N, fichier);
            }
            for(i=0; i<M; i++)
            {
                for(j=0; j<N; j++)
                {
                    printf("%d ", tab2[i][j]);
                }
                printf("\n");
            }
            fclose(fichier);
        }
        else
            printf("fichier en lecture non ouvert\n");*
        
}