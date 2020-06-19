#include<stdio.h>
#include<stdint.h>
int pack_IP(uint8_t addr_8[]);
int main()
{
    uint8_t ip_addr_8[4];
    uint32_t ip_32;
    printf(" Enter IP address : ");
    for(int i=0;i<4;i++)
        scanf("%u",&ip_addr_8[i]);
    for(int i=0;i<4;i++)
        printf("%u.",ip_addr_8[i]);
    ip_32=pack_IP(ip_addr_8);
    printf("\n 32-bit IP Address : %x\n",ip_32);
    return 0;
}
int pack_IP(uint8_t addr_8[])
{
    int main_ip=0;
    for(int i=0;i<4;i++)
        main_ip+=addr_8[3-i]*(0x01<<(8*i));
    return main_ip;
}
