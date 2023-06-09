#include <iostream>
#include <string.h>

typedef unsigned char u8;
typedef unsigned int u32;

u8 confusion[512]={
    0xac,0xd1,0x25,0x94,0x1f,0xb3,0x33,0x28,0x7c,0x2b,0x17,0xbc,0xf6,0xb0,0x55,0x5d,
    0x8f,0xd2,0x48,0xd4,0xd3,0x78,0x62,0x1a,0x02,0xf2,0x01,0xc9,0xaa,0xf0,0x83,0x71,
    0x72,0x4b,0x6a,0xe8,0xe9,0x42,0xc0,0x53,0x63,0x66,0x13,0x4a,0xc1,0x85,0xcf,0x0c,
    0x24,0x76,0xa5,0x6e,0xd7,0xa1,0xec,0xc6,0x04,0xc2,0xa2,0x5c,0x81,0x92,0x6c,0xda,
    0xc6,0x86,0xba,0x4d,0x39,0xa0,0x0e,0x8c,0x8a,0xd0,0xfe,0x59,0x96,0x49,0xe6,0xea,
    0x69,0x30,0x52,0x1c,0xe0,0xb2,0x05,0x9b,0x10,0x03,0xa8,0x64,0x51,0x97,0x02,0x09,
    0x8e,0xad,0xf7,0x36,0x47,0xab,0xce,0x7f,0x56,0xca,0x00,0xe3,0xed,0xf1,0x38,0xd8,
    0x26,0x1c,0xdc,0x35,0x91,0x43,0x2c,0x74,0xb4,0x61,0x9d,0x5e,0xe9,0x4c,0xbf,0x77,
    0x16,0x1e,0x21,0x1d,0x2d,0xa9,0x95,0xb8,0xc3,0x8d,0xf8,0xdb,0x34,0xe1,0x84,0xd6,
    0x0b,0x23,0x4e,0xff,0x3c,0x54,0xa7,0x78,0xa4,0x89,0x33,0x6d,0xfb,0x79,0x27,0xc4,
    0xf9,0x40,0x41,0xdf,0xc5,0x82,0x93,0xdd,0xa6,0xef,0xcd,0x8d,0xa3,0xae,0x7a,0xb6,
    0x2f,0xfd,0xbd,0xe5,0x98,0x66,0xf3,0x4f,0x57,0x88,0x90,0x9c,0x0a,0x50,0xe7,0x15,
    0x7b,0x58,0xbc,0x07,0x68,0x3a,0x5f,0xee,0x32,0x9f,0xeb,0xcc,0x18,0x8b,0xe2,0x57,
    0xb7,0x49,0x37,0xde,0xf5,0x99,0x67,0x5b,0x3b,0xbb,0x3d,0xb5,0x2d,0x19,0x2e,0x0d,
    0x93,0xfc,0x7e,0x06,0x08,0xbe,0x3f,0xd9,0x2a,0x70,0x9a,0xc8,0x7d,0xd8,0x46,0x65,
    0x22,0xf4,0xb9,0xa2,0x6f,0x12,0x1b,0x14,0x45,0xc7,0x87,0x31,0x60,0x29,0xf7,0x73,
    0x2c,0x97,0x72,0xcd,0x89,0xa6,0x88,0x4c,0xe8,0x83,0xeb,0x59,0xca,0x50,0x3f,0x27,
    0x4e,0xae,0x43,0xd5,0x6e,0xd0,0x99,0x7b,0x7c,0x40,0x0c,0x52,0x86,0xc1,0x46,0x12,
    0x5a,0x28,0xa8,0xbb,0xcb,0xf0,0x11,0x95,0x26,0x0d,0x34,0x66,0x22,0x18,0x6f,0x51,
    0x9b,0x3b,0xda,0xec,0x5e,0x00,0x2a,0xf5,0x8f,0x61,0xba,0x96,0xb3,0xd1,0x30,0xdc,
    0x33,0x75,0xe9,0x6d,0xc8,0xa1,0x3a,0x3e,0x5f,0x9d,0xfd,0xa9,0x31,0x9f,0xaa,0x85,
    0x2f,0x92,0xaf,0x67,0x78,0xa5,0xab,0x03,0x21,0x4f,0xb9,0xad,0xfe,0xf3,0x42,0xfc,
    0x17,0xd7,0xee,0xa3,0xd8,0x80,0x14,0x2e,0xa0,0x47,0x55,0xc4,0xff,0xe5,0x13,0x3f,
    0x81,0xb6,0x7a,0x94,0xd0,0xb5,0x54,0xbf,0x91,0xa7,0x37,0xf1,0x6b,0xc9,0x1b,0xb1,
    0x3c,0xb6,0xd9,0x32,0x24,0x8d,0xf2,0x82,0xb4,0xf9,0xdb,0x7d,0x44,0xfb,0x1e,0xd4,
    0xea,0x5d,0x35,0x69,0x23,0x71,0x57,0x01,0x06,0xe4,0x55,0x9a,0xa4,0x58,0x56,0xc7,
    0x4a,0x8c,0x8a,0xd6,0x6a,0x49,0x70,0xc5,0x8e,0x0a,0x62,0xdc,0x29,0x4b,0x42,0x41,
    0xcb,0x2b,0xb7,0xce,0x08,0xa1,0x76,0x1d,0x1a,0xb8,0xe3,0xcc,0x7e,0x48,0x20,0xe6,
    0xf8,0x45,0x93,0xde,0xc3,0x63,0x0f,0xb0,0xac,0x5c,0xba,0xdf,0x07,0x77,0xe7,0x4e,
    0x1f,0x28,0x10,0x6c,0x59,0xd3,0xdd,0x2d,0x65,0x39,0xb2,0x74,0x84,0x3d,0xf4,0xbd,
    0xc7,0x79,0x60,0x0b,0x4d,0x33,0x36,0x25,0xbc,0xe0,0x09,0xcf,0x5b,0xe2,0x38,0x9e,
    0xc0,0xef,0xd2,0x16,0x05,0xbe,0x53,0xf7,0xc2,0xc6,0xa2,0x24,0x98,0x1c,0xad,0x04};

u32 diffusion[32]={
    0xf26cb481,0x16a5dc92,0x3c5ba924,0x79b65248,0x2fc64b18,0x615acd29,0xc3b59a42,0x976b2584,
    0x6cf281b4,0xa51692dc,0x5b3c24a9,0xb6794852,0xc62f184b,0x5a6129cd,0xb5c3429a,0x6b978425,
    0xb481f26c,0xdc9216a5,0xa9243c5b,0x524879b6,0x4b182fc6,0xcd29615a,0x9a42c3b5,0x2584976b,
    0x81b46cf2,0x92dca516,0x24a95b3c,0x4852b679,0x184bc62f,0x29cd5a61,0x429ab5c3,0x84256b97};

u8 input[32]={
    //change only this :
    0x66,0xd5,0x4e,0x28,0x5f,0xff,0x6b,0x53,0xac,0x3b,0x34,0x14,0xb5,0x3c,0xb2,0xc6,
    0xa4,0x85,0x1e,0x0d,0x86,0xc7,0x4f,0xba,0x75,0x5e,0xcb,0xc3,0x6e,0x48,0x79,0x8f
    //
};

void Forward(u8 c[32],u8 d[32],u8 s[512],u32 p[32])
{
    for(u32 i=0;i<256;i++)
    {
        for(u8 j=0;j<32;j++)
        {
            d[j]=s[c[j]];
            c[j]=0;
        }

        for(u8 j=0;j<32;j++)
            for(u8 k=0;k<32;k++)
                c[j]^=d[k]*((p[j]>>k)&1);
    }
    for(u8 i=0;i<16;i++)
        d[i]=s[c[i*2]]^s[c[i*2+1]+256];
}

void ForwardTest(u8 c[32],u8 d[32],u8 s[512],u32 p[32])
{

    /*for(u32 i=0;i<1;i++)
    {

        for(u8 j=0;j<32;j++)
        {
            d[j]=s[c[j]];
            c[j]=0;
        }

        for(u8 j=0;j<32;j++)
            for(u8 k=0;k<32;k++)
                c[j]^=d[k]*((p[j]>>k)&1);
    }*/
    for(u8 j=0;j<32;j++){
        d[j]=s[c[j]];
        c[j] = 0;
    }
    for(u8 j=0;j<32;j++)
        for(u8 k=0;k<32;k++)
            c[j]^=d[k]*((p[j]>>k)&1);
    for(u8 i=0;i<16;i++)
        d[i]=s[c[i*2]]^s[c[i*2+1]+256];
}

/*
The solutions to this challenge belong to different levels :

Level 1 : an iterative algorithm which typically takes more than a second to
find a solution (for any given output).

Most people stop here, which is fine, but if you want to go further, there is :

Level 2 : a non-iterative algorithm which typically takes less than a
millisecond to find a solution (for any given output).

Few people have reached this level. But if you want to beat it completely,
there's yet another castle...

Level 3 : an algorithm which can provide any of the 2^128 solutions (for any
given output).

Even fewer people have reached this final level. Congratulations to them!

*/

/*
First section gathers the functions that will be used to revert the last forward operation corresponding to a cross operation between confusion elements
*/

void ComputeConfusionCrossXorOperations(u8 confusion[512], u8 confusion_cross_xor_operations[512])
{
    for(u32 i=0; i<256;i++)
        for (u32 j=0; j<256;j++){
            confusion_cross_xor_operations[confusion[i]^confusion[j+256]]=i;
            confusion_cross_xor_operations[confusion[i]^confusion[j+256]+256]=j;
        }
}

void InvertConfusionCorrelation(u8 value[16], u8 confusion_cross_xor_operations[512], u8 solutions[32])
{
    for (u8 k=0; k<16;k++){
        solutions[2*k] = confusion_cross_xor_operations[value[k]];
        solutions[2*k+1] = confusion_cross_xor_operations[value[k]+256];
    }
}

/*
Second section gathers the functions that will be used to revert the first forward operation corresponding to the confusion matrix affectation. For a scalar it will return one index of the confusion matrix matching the result
*/


void ComputeInverseConfusion(u8 inverseConfusion[256], u8 confusion[256])
    /*
    Computation of the table storing the inverse of the confusion operation
    */
{
    for (u32 i=0; i<256;i++){
        inverseConfusion[confusion[i]] = i;
    }
}

void InverseConfusion(u8 inverseConfusion[256], u8 input[32])
    /*
    Invert the operation of the confusion affectation
    */
{
    for (u8 i=0; i<32;i++){
        input[i] = inverseConfusion[input[i]];
    }
}

/*
Third section gathers the functions that will be used to revert the diffusion operation corresponding to a linear system in F2 to invert
*/


void DisplayDiffusionMatrix(u32 diffusion[32])
    /*
    Display the diffusion matrix, useful for debugging
    */
{
    std::cout << std::endl;
    for(u8 i=0; i<32;i++){
        for (u8 j=0; j<32;j++){
            std::cout << int((diffusion[i]>>j)&1);
        }
        std::cout << std::endl;
    }
}

void InverseDiffusionMatrix(u32 diffusion[32], u8 majorRow[32], u32 diagonalisationOperation[64])
    /*
    For a given diffusion matrix it will stores all the operations required to invert the system and find the input based on the output
    */
{
    // Initialization
    u32 inverseDiffusion[32];
    for(u8 i=0; i<32;i++){
        inverseDiffusion[i] = diffusion[i];
        diagonalisationOperation[i] = 0;
        diagonalisationOperation[32+i] = 0;
    }
    for(u8 i=0; i<32;i++){
        // First reagence to be sure to have at least the first row someting non nul as coefficient
        u8 k = i;
        while (!((inverseDiffusion[k]>>i)&1)){
            k += 1;
        }
        // Set up major row
        majorRow[i]=k;
        // Invert element
        u32 temp = inverseDiffusion[k];
        inverseDiffusion[k] = inverseDiffusion[i];
        inverseDiffusion[i] = temp;
        // Remove for all the other minor rows the i-th element by adding the i-th line if required
        for (u8 j=i+1; j<32;j++){
            temp = ((inverseDiffusion[j]>>i)&1);
            inverseDiffusion[j] ^= inverseDiffusion[i]*(temp);
            diagonalisationOperation[i]^=temp<<j;
        }
    }
    // Then we need to remove for all lines all the non diagonal elements
    for(u8 i=0; i<32;i++){
        u32 temp=0;
        for (u8 j=i+1; j<32;j++){
            temp = ((inverseDiffusion[31-j]>>(31-i))&1);
            inverseDiffusion[31-j] ^= inverseDiffusion[31-i]*temp;
            diagonalisationOperation[32+i]^=(temp<<(31-j));
        }
    }
}

void InverseDiffusionMatrix(u32 diffusion[32], u32 inverseDiffusion[32])
/*
    For a given diffusion matrix it will stores all the operations required to invert the system and find the input based on the output
    */
{
    // Initialization
    u32 temp_matrix[32];
    u32 temp;
    for(u8 i=0; i<32;i++){
        temp_matrix[i] = diffusion[i];
        inverseDiffusion[i] = 1<<i;
    }
    u8 majorRow[32];
    DisplayDiffusionMatrix(temp_matrix);
    DisplayDiffusionMatrix(inverseDiffusion);
    for(u8 i=0; i<32;i++){
        // First reagence to be sure to have at least the first row someting non nul as coefficient
        u8 k = i;
        while (!((temp_matrix[k]>>i)&1)){
            k += 1;
        }
        // Invert element
        temp = temp_matrix[k];
        temp_matrix[k] = temp_matrix[i];
        temp_matrix[i] = temp;
        // Invert element
        temp = inverseDiffusion[k];
        inverseDiffusion[k] = inverseDiffusion[i];
        inverseDiffusion[i] = temp;
        // Remove for all the other minor rows the i-th element by adding the i-th line if required
        for (u8 j=i+1; j<32;j++){
            temp = (temp_matrix[j]>>i)&1;
            temp_matrix[j] ^= temp_matrix[i]*(temp);
            inverseDiffusion[j] ^= inverseDiffusion[i]*(temp);
        }
    }
    DisplayDiffusionMatrix(temp_matrix);
    DisplayDiffusionMatrix(inverseDiffusion);
    // Then we need to remove for all lines all the non diagonal elements
    for(u8 i=0; i<32;i++){
        u32 temp=0;
        for (u8 j=i+1; j<32;j++){
            temp = ((temp_matrix[31-j]>>(31-i))&1);
            temp_matrix[31-j] ^= temp_matrix[31-i]*temp;
            inverseDiffusion[31-j] ^= inverseDiffusion[31-i]*temp;
        }
    }
    DisplayDiffusionMatrix(temp_matrix);
    DisplayDiffusionMatrix(inverseDiffusion);
}

void InverseDiffusion(u8 input[32], u8 majorRow[32], u32 diagonalisationOperation[64], u32 temp)
{
    // First part of the diagonalisation
    for(u8 i=0; i<32;i++){
        // Invert element
        if (majorRow[i] != i){
            temp = input[majorRow[i]];
            input[majorRow[i]] = input[i];
            input[i] = temp;
        }
        for (u8 j=i+1; j<32;j++){
            input[j] ^= input[i]*((diagonalisationOperation[i]>>j)&1);
        }
    }

    // Second part of the diagonalisation
    for(u8 i=0; i<32;i++){
        for (u8 j=i+1; j<32;j++){
            input[31-j]^=(diagonalisationOperation[32+i]>>(31-j)&1)*input[31-i];
        }
    }
}

void InverseDiffusion(u8 input[32], u8 output[32], u32 inverseDiffusion[32])
{

    for(u8 i=0;i<32;i++)
        for(u8 j=0;j<32;j++)
            output[i]^=input[j]*((inverseDiffusion[i]>>j)&1);
}

/*
 * All the initialization functions to speed the backward operation by setting some caches variables
 *
 */

void Setup(u8 confusion[512], u32 diffusion[32], u8 inverseConfusion[256], u8 majorRow[32], u32 diagonalisationOperation[64], u8 confusion_cross_xor_operations[512])
{
    // First compute the inverse confusion matrix
    ComputeInverseConfusion(inverseConfusion, confusion);
    // Them compute the cross correlation confusion matrix
    ComputeConfusionCrossXorOperations(confusion, confusion_cross_xor_operations);
    // Finally compute the inverse diffusion matrix elements
    InverseDiffusionMatrix(diffusion, majorRow, diagonalisationOperation);
}

void Backward(u8 input[32], u8 output[16], u8 inverseConfusion[256], u8 majorRow[32], u32 diagonalisationOperation[64], u8 confusion_cross_xor_operations[512], u32 temp)
{

    // First reverse the last operation
    InvertConfusionCorrelation(output, confusion_cross_xor_operations, input);
    // Then reverse the different confusion / diffusion operations
    //for (u32 i=0; i<1; i++){
    InverseDiffusion(input, majorRow, diagonalisationOperation, temp);
    InverseConfusion(inverseConfusion, input);
    //}
}


/*
 * All the test functions to ensure validity of the different backward operations
 *
 */

void TestInverseConfusion(u8 confusion[512], u8 inverseConfusion[256]){

    u8 testValue[3] = {14, 125, 24};
    for (u8 i; i<3; i++){
        if (inverseConfusion[confusion[i]] != i){
            std::cout<<"Test failure for inverse confusion" << std::endl;
        }
    }
    u8 testValueB[32] = {18, 76, 14, 84, 36, 160, 64, 247, 154, 81, 209, 72, 14, 44, 159, 150, 57, 127, 231, 41, 172, 151, 154, 243, 243, 53, 168, 48, 23, 239, 212, 165};
    u8 input[32];
    for (u8 i; i<32; i++){
        input[i] = testValueB[i];
    }
    InverseConfusion(inverseConfusion, input);
    for (u8 i; i<32; i++){
        if (confusion[input[i]] != testValueB[i]){
            std::cout<< int(testValueB[i]) << std::endl;
            std::cout<<"Test failure for inverse confusion" << std::endl;
        }
    }
    std::cout<<"Test valid for inverse confusion" << std::endl;
}

void TestInverseConfusionCorrelation(u8 confusion[512], u8 confusion_cross_xor_operations[512]){
    u8 input[32] ;
    u8 output[16] = "Hire me!!!!!!!!";
    InvertConfusionCorrelation(output, confusion_cross_xor_operations, input);
    for (u8 i; i<16; i++){
        u8 value = confusion[input[2*i]]^confusion[input[2*i+1]+256];
        if (value != output[i]){
            std::cout<<"Test failure for inverse confusion correlation operation" << std::endl;
        }
    }
    std::cout<<"Test valid for inverse confusion correlation operation" << std::endl;
}

void TestDiffusion(u32 diffusion[32], u8 majorRow[32], u32 diagonalisationOperation[64], u8 confusion_cross_xor_operations[512])
{

    u8 input[32];
    u8 output[16] = "Hire me!!!!!!!!";
    // Revert confusion correlation
    InvertConfusionCorrelation(output, confusion_cross_xor_operations, input);
    // Revert diffusion
    u32 temp;
    u8 outputToMatch[32];
    for(u8 j=0;j<32;j++)
    {
        outputToMatch[j]=input[j];
    }
    InverseDiffusion(input, majorRow, diagonalisationOperation, temp);
    u8 c[32];
    for(u8 j=0;j<32;j++)
    {
        c[j]=0;
    }

    for(u8 j=0;j<32;j++)
        for(u8 k=0;k<32;k++)
            c[j]^=input[k]*((diffusion[j]>>k)&1);

    for (u8 i=0; i<32; i++){
        if (c[i] != outputToMatch[i]){
            std::cout<<"Test failure for inverse diffusion operation" << std::endl;
        }
    }
    std::cout<<"Test valid for inverse diffusion operation" << std::endl;
}

void TestBackward(u8 inverseConfusion[256], u8 majorRow[32], u32 diagonalisationOperation[64], u8 confusion_cross_xor_operations[512]){

    u8 output[16] = "Hire me!!!!!!!!";
    u8 match[32];
    u8 input[32];
    u32 temp;

    // Launch backward
    Backward(input, output, inverseConfusion, majorRow, diagonalisationOperation, confusion_cross_xor_operations, temp);
    // Launch forward
    ForwardTest(input, match, confusion, diffusion);
    for (u8 i=0; i<16; i++){
        if (match[i] != output[i])
        {
            std::cout<<"Test failure for backward" << std::endl;
        }
    }
    std::cout<<"Test valid for backward" << std::endl;
}

/*
 * Compute all non reversible elements from confusion matrix
 */

void ComputeNonReversibleElement(u8 confusion[256]){

    u8 compatibleElement[256];
    for (u32 i=0; i<256; i++){
        compatibleElement[i] = 0;
    }
    for (u32 i=0; i<256; i++){
        compatibleElement[confusion[i]] = 1;
    }
    for (u32 i=0; i<256; i++){
        if (compatibleElement[i] == 0){
            std::cout << i << std::endl;
        }
    }
}

int main(int argc, char* argv[])
{
    u8 target[]="Hire me!!!!!!!!";
    u8 output[32];

    Forward(input,output,confusion,diffusion);

    /*
    First compute all the basic elements that will be used for the backward operation
    */

    // Definition of the inverse confusion matrix
    u8 inverseConfusion[256];
    // Definition of the matrix 256x256 to inverse final step operation
    u8 confusion_cross_xor_operations[512];
    // Definition of the different elements that are used to invert diffusion operation
    u8 majorRow[32];
    u32 diagonalisationOperation[64];
    u32 temp;

    // Launch the computation of all the static elements that will be used to reverse the different operations used during the forward pass
    Setup(confusion, diffusion, inverseConfusion, majorRow, diagonalisationOperation, confusion_cross_xor_operations);

    // Launch test
    TestInverseConfusion(confusion, inverseConfusion);
    TestInverseConfusionCorrelation(confusion, confusion_cross_xor_operations);
    TestDiffusion(diffusion, majorRow, diagonalisationOperation, confusion_cross_xor_operations);
    TestBackward(inverseConfusion, majorRow, diagonalisationOperation, confusion_cross_xor_operations);

    //ComputeNonReversibleElement(confusion);
    //ComputeNonReversibleElement(confusion+256*sizeof(u8));

    u32 inverseDiffusion[32];
    InverseDiffusionMatrix(diffusion , inverseDiffusion);

    /*



    // Definition of the inverse confusion matrix
    u8 inverseConfusion[256];
    ComputeInverseConfusion(inverseConfusion, confusion);

    // Definition of the matrix 256x256 to inverse final step operations
    u8 confusion_cross_xor_operations[256*256];
    // Set up of all the cache variables that will be used during resolution
    ComputeConfusionCrossXorOperations(confusion, confusion_cross_xor_operations);
    // Find solution for final confusion operations
    u8 solutions[16];
    FindAllConfusionCouples(output, confusion_cross_xor_operations, solutions);
    // Display them
    for(u8 i=0; i<32;i++) {
        std::cout << int(solutions[i]) << "  ";
    }
    std::cout << "ok" << "  ";

    DisplayDiffusionMatrix(diffusion);
    First compute the correlation matrix 256x256 resulting in all the operations XOR between confusion elements that will be used to determine what are the elements that can be used as solution
    */

    return memcmp(output,target,16); // => contact apply(at)nerd.nintendo.com
}
