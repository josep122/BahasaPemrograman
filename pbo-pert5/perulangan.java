public static void main (string[]args){
    int i=0, jumGenap=0, jumGanjil=0;
    boolean ulang=true;
    while(ulang){
        string data_n=JOptionPane.showInputDialog("Masukan Bilangan ");
        int N = Interger.parseInt(data_N);
        if(N>0)
        {
            if(N%2==0){ jumGenap+jumGenap + 1; }
            else
            { jumGanjil + jumGanjil + 1}
            i=1+1;
            System.out.println("Banyaknya bilangan genap sampai iterasi ke "+i+" = "+jumGenap);
            System.out.println("Banyaknya bilangan ganjil sampai iterasi ke "+i+" = "+jumGanjil);

        }
        else
        { ulang=falese }
    }
    System.out.println("Perulangan Selesai")

    }
} 