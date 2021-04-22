printf("\n定义数字指针数组2\n");
int *getN2[][4] = {(1,2,3,4),(4,5,6,7),458,(9,8,7,6)};

printf("sizeof(getN2):%d\n",sizeof(getN2));
printf("sizeof(getN2[0]):%d\n",sizeof(getN2[0]));
printf("sizeof(*getN2[0]):%d\n",sizeof(*getN2[0]));
printf("地址(getN2):%d\n",(&getN2));
printf("值(getN2):%d\n",getN2);
printf("值(getN2+1):%d\n",getN2+1);
printf("值(getN2+2):%d\n",getN2+2);
printf("值(getN2+3):%d\n",getN2+3);
printf("*(getN2):%d\n",*(getN2));
printf("*(getN2+1):%d\n",*(getN2+1));
printf("*(getN2+2):%d\n",*(getN2+2));
printf("*(getN2+3):%d\n",*(getN2+3));
printf("地址(getN2[0]):%d\n",(&getN2[0]));
printf("getN2[0]=%d\n",getN2[0]);