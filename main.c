#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
//ROZDZIAL 1
//1.2 PODSTAWY JEZYKA C

// 1.2.1
int main1_2_1() {
    printf("Hello World\n");
    return 0;
}

// 1.2.2
int main1_2_2() {
    printf("Bardzo\n");
    printf("d³ugi\n");
    printf("napis\n");
    return 0;
}

// 1.2.3
int main1_2_3() {
    printf("Napis zawieraj¹cy ró¿ne dziwne znaczki // \\\\ \\\\ $ & %%\n");
    return 0;
}

// 1.2.4
int main1_2_4() {
    int x;
    scanf("%d", &x);
    printf("%d\n", x);
    return 0;
}

// 1.2.5
int main1_2_5() {
    double x;
    scanf("%lf", &x);
    printf("%f\n", x);
    return 0;
}

// 1.2.6
int main1_2_6() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n%d\n%d\n", a, b, c);
    return 0;
}


// 1.2.7
int main1_2_7() {
    int x;
    scanf("%d", &x);
    printf("%d\n", x + 1);
    return 0;
}

// 1.2.8
int main1_2_8() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    double avg = (a + b + c) / 3.0;
    printf("%f\n", avg);
    return 0;
}

// 1.2.9
int main1_2_9() {
    double x;
    scanf("%lf", &x);
    printf("%f\n", sqrt(x));
    return 0;
}

// 1.2.10
int main1_2_10() {
    double x;
    scanf("%lf", &x);
    printf("%f\n", fabs(x));
    return 0;
}

// 1.2.11
int main1_2_11() {
    double x;
    scanf("%lf", &x);
    printf("%.2f\n", x);
    return 0;
}

// 1.2.12
int main1_2_12() {
    double x;
    scanf("%lf", &x);
    printf("%.1e\n", x);
    return 0;
}

//1.3 INSTRUKCJE WARUNKOWE I WYBORU

// 1.3.1
int main1_3_1() {
    int n;
    scanf("%d", &n);
    if (n < 0) n = -n;
    printf("%d\n", n);
    return 0;
}

// 1.3.2

int main1_3_2() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", (a > b ? a : b));
    return 0;
}

// 1.3.3
int main1_3_3() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    printf("%d\n", max);
    return 0;
}

// 1.3.4
int main1_3_4() {
    int a, b;
    scanf("%d %d", &a, &b);
    int abs_a = (a < 0 ? -a : a);
    int abs_b = (b < 0 ? -b : b);
    printf("%d\n", (abs_a > abs_b ? a : b));
    return 0;
}

// 1.3.5
// Oblicza pole trójk¹ta. U¿ytkownik wybiera tryb:
//   1 - podaje podstawê i wysokoœæ;
//   2 - podaje trzy boki (Heron).
int main1_3_5() {
    int mode;
    scanf("%d", &mode);
    if (mode == 1) {
        double base, height;
        scanf("%lf %lf", &base, &height);
        printf("%f\n", 0.5 * base * height);
    } else {
        double a, b, c;
        scanf("%lf %lf %lf", &a, &b, &c);
        double p = (a + b + c) / 2.0;
        double area = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("%f\n", area);
    }
    return 0;
}

// 1.3.6
int main1_3_6() {
    double a1, b1, c1, a2, b2, c2;
    scanf("%lf %lf %lf %lf %lf %lf", &a1, &b1, &c1, &a2, &b2, &c2);
    double D  = a1*b2 - a2*b1;
    double Dx = c1*b2 - c2*b1;
    double Dy = a1*c2 - a2*c1;
    if (fabs(D) > 1e-12) {
        printf("%f %f\n", Dx/D, Dy/D);
    } else if (fabs(Dx) < 1e-12 && fabs(Dy) < 1e-12) {
        printf("Infinite solutions\n");
    } else {
        printf("No solution\n");
    }
    return 0;
}

// 1.3.7
int main1_3_7() {
    double a, b, c, delta;
    scanf("%lf %lf %lf", &a, &b, &c);
    delta = b*b - 4*a*c;
    if (delta > 0) {
        double r1 = (-b - sqrt(delta)) / (2*a);
        double r2 = (-b + sqrt(delta)) / (2*a);
        printf("%f %f\n", r1, r2);
    } else if (fabs(delta) < 1e-12) {
        printf("%f\n", -b / (2*a));
    } else {
        printf("No real roots\n");
    }
    return 0;
}

// 1.3.8
int main1_3_8() {
    int choice;
    double a, b, area;
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            scanf("%lf", &a);
            area = a * a;
            break;
        case 2:
            scanf("%lf %lf", &a, &b);
            area = a * b;
            break;
        case 3:
            scanf("%lf %lf", &a, &b);
            area = 0.5 * a * b;
            break;
        default:
            return 1;
    }
    printf("%f\n", area);
    return 0;
}

// 1.3.9
int main_1_3_9() {
    char operacja;
    double liczba1, liczba2, wynik;

    scanf(" %c %lf %lf", &operacja, &liczba1, &liczba2);

    switch (operacja) {
        case '+':
            wynik = liczba1 + liczba2;
            break;
        case '-':
            wynik = liczba1 - liczba2;
            break;
        case '*':
            wynik = liczba1 * liczba2;
            break;
        case '/':
            wynik = liczba1 / liczba2;
            break;
        default:
            return 1;
    }

    printf("Wynik: %f\n", wynik);
    return 0;
}

//1.4 PETLE

// 1.4.1
int main1_4_1() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = n; i < m; i += n)
        printf("%d\n", i);
    return 0;
}

// 1.4.2
int main1_4_2() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= m; i++)
        printf("%d\n", n * i);
    return 0;
}

// 1.4.3
int main1_4_3() {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    for (int i = n; i < k; i += n)
        if (i > m)
            printf("%d\n", i);
    return 0;
}

// 1.4.4
int main1_4_4() {
    int n;
    scanf("%d", &n);
    unsigned long long fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    printf("%llu\n", fact);
    return 0;
}

// 1.4.5
int main1_4_5() {
    int n;
    scanf("%d", &n);
    long long sum = 0;
    for (int i = 0; i <= n; i++)
        sum += (long long)i * i;
    printf("%lld\n", sum);
    return 0;
}

// 1.4.6
int main1_4_6() {
    int n;
    scanf("%d",&n);
    unsigned long long p=1;
    for(int i=2;i<=n;i+=2)
        p*=i;
    printf("%llu\n",p);
    return 0;
}

// 1.4.7
int main1_4_7() {
    int n,m;
    scanf("%d %d",&n,&m);
    unsigned long long p=1;
    for(int i=n;i<=m;i++)
        p*=i;
    printf("%llu\n",p);
    return 0;
}

// 1.4.8
int main1_4_8() {
    int n;
    scanf("%d",&n);
    unsigned long long a=0,b=1,t;
    for(int i=0;i<n;i++)
        t=a,a=b,b=t+b;
    printf("%llu\n",a);
    return 0;
}

// 1.4.9
int main1_4_9() {
    int n,m;
    scanf("%d %d",&n,&m);
    while(m){int t=m;m=n%m;n=t;}
    printf("%d\n",n);
    return 0;
}

// 1.4.10
int main1_4_10() {
    int n;
    scanf("%d",&n);
    int r=0;
    while((r+1)*(r+1)<=n) r++;
    printf("%d\n",r);
    return 0;
}

// 1.4.11a
int main1_4_11a() {
    int a,b,c,d; scanf("%d %d %d %d",&a,&b,&c,&d);
    int aa = a<0?-a:a, x=0;
    while(!(aa*x*x + b*x + c > d)) x++;
    printf("%d\n",x);
    return 0;
}

// 1.4.11b
int main1_4_11b() {
    int a,b,c,d; scanf("%d %d %d %d",&a,&b,&c,&d);
    int x=0;
    while(5*x*x + a*x + b < c) x++;
    x--;
    printf("%d\n",x);
    return 0;
}

// 1.4.11c
int main1_4_11c() {
    int a,b,c,d; scanf("%d %d %d %d",&a,&b,&c,&d);
    int x=0;
    while(5*x*x + a*x + b <= c) x++;
    x--;
    printf("%d\n",x);
    return 0;
}

// 1.4.12
int main1_4_12() {
    int n; scanf("%d",&n);
    long long sum=0;
    for(int i=1;i<n;i++){
        int a=i,b=n; while(b){int t=b;b=a%b;a=t;}
        if(a==1) sum+=i;
    }
    printf("%lld\n",sum);
    return 0;
}

// 1.4.13
int main1_4_13() {
    int n; scanf("%d",&n);
    unsigned long long sum=1, fact=1;
    for(int i=1;i<=n;i++){ fact*=i; sum+=fact; }
    printf("%llu\n",sum);
    return 0;
}

// 1.4.14
int main1_4_14() {
    int n; scanf("%d",&n);
    for(int a=1;a<n;a++)
        for(int b=a;b<n;b++)
            for(int c=b;c<n;c++)
                if(a*a + b*b == c*c) printf("%d %d %d\n",a,b,c);
    return 0;
}

//RODZIAL 2
//2.2 ZADANIA

// 2.2.1
int abs_val(int n) {
    if (n < 0) {
        return -n;
    }
    return n;
}

// 2.2.2
unsigned long long fact(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// 2.2.3
int max_div(int n) {
    for (int k = n / 2; k > 0; k--) {
        if (n % k == 0) {
            return k;
        }
    }
    return 1;
}

// 2.2.4
int pow2_nonneg(int n) {
    int result = 1;
    for (int i = 0; i < n; i++) {
        result *= 2;
    }
    return result;
}

// 2.2.5
double pow2(int n) {
    double result = 1.0;
    if (n >= 0) {
        for (int i = 0; i < n; i++) {
            result *= 2.0;
        }
    } else {
        for (int i = 0; i < -n; i++) {
            result /= 2.0;
        }
    }
    return result;
}

// 2.2.6
unsigned long long pow_nm_nonneg(int n, int m) {
    unsigned long long result = 1;
    for (int i = 0; i < m; i++) {
        result *= n;
    }
    return result;
}

// 2.2.7
double pow_nm(int n, int m) {
    double result = 1.0;
    if (m >= 0) {
        for (int i = 0; i < m; i++) {
            result *= n;
        }
    } else {
        for (int i = 0; i < -m; i++) {
            result /= n;
        }
    }
    return result;
}

// 2.2.8
int isqrt(int n) {
    int r = 0;
    while ((r + 1) * (r + 1) <= n) {
        r++;
    }
    return r;
}

// 2.2.9
int pierwiastek_stopnia(int stopien, int liczba) {
    int wynik = 0;
    while (1) {
        unsigned long long potega = 1;
        for (int i = 0; i < stopien; i++) {
            potega *= (wynik + 1);
        }
        if (potega <= (unsigned)liczba) {
            wynik++;
        } else {
            break;
        }
    }
    return wynik;
}

// 2.2.10
int nwd(int a, int b) {
    while (b) {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

long long suma_wzglêdnie_pierwszych(int n) {
    long long suma = 0;
    for (int i = 1; i < n; i++) {
        if (nwd(i, n) == 1) {
            suma += i;
        }
    }
    return suma;
}

int main2_2_10() {
    int n;
    scanf("%d", &n);
    printf("%lld\n", suma_wzglêdnie_pierwszych(n));
    return 0;
}

// 2.2.11
int pierwiastek_ca³kowity(int liczba) {
    int r = 0;
    while ((r + 1) * (r + 1) <= liczba) {
        r++;
    }
    return r;
}

long long suma_pierwiastków(int n) {
    long long suma = 0;
    for (int i = 0; i <= n; i++) {
        suma += pierwiastek_ca³kowity(i);
    }
    return suma;
}

int main2_2_11() {
    int n;
    scanf("%d", &n);
    printf("%lld\n", suma_pierwiastków(n));
    return 0;
}

// 2.2.12
long long suma_pierwiastków_stopnia(int n, int stopien) {
    long long suma = 0;
    for (int i = 0; i <= n; i++) {
        suma += pierwiastek_stopnia(stopien, i);
    }
    return suma;
}

int main2_2_12() {
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%lld\n", suma_pierwiastków_stopnia(n, m));
    return 0;
}

// 2.2.13a
void wszystkie_rozk³ady_kwadratów(int n) {
    for (int a = 1; a < n; a++) {
        for (int b = 1; b < n; b++) {
            if (a * a + b * b == n) {
                printf("%d %d\n", a, b);
            }
        }
    }
}

// 2.2.13b
void unikalne_rozk³ady_kwadratów(int n) {
    for (int a = 1; a * a <= n; a++) {
        for (int b = a; a * a + b * b <= n; b++) {
            if (a * a + b * b == n) {
                printf("%d %d\n", a, b);
            }
        }
    }
}

// pomocnicza: podnosi x do potêgi m
unsigned long long potega(int x, int m) {
    unsigned long long wynik = 1;
    for (int i = 0; i < m; i++)
        wynik *= (unsigned long long)x;
    return wynik;
}

// 2.2.14a
void wszystkie_rozk³ady_kwadratów(int n) {
    for (int a = 1; a * a <= n; a++) {
        for (int b = 1; b * b <= n; b++) {
            if (a * a + b * b == n)
                printf("%d^2 + %d^2\n", a, b);
        }
    }
}

// 2.2.14b
void unikalne_rozk³ady_kwadratów(int n) {
    for (int a = 1; a * a <= n; a++) {
        for (int b = a; a * a + b * b <= n; b++) {
            if (a * a + b * b == n)
                printf("%d^2 + %d^2\n", a, b);
        }
    }
}

// 2.2.15a
void wszystkie_rozk³ady_potêg(int n, int m) {
    for (int a = 1; potega(a, m) <= (unsigned)n; a++) {
        for (int b = 1; potega(b, m) <= (unsigned)n; b++) {
            if (potega(a, m) + potega(b, m) == (unsigned)n)
                printf("%d^%d + %d^%d\n", a, m, b, m);
        }
    }
}

// 2.2.15b
void unikalne_rozk³ady_potêg(int n, int m) {
    for (int a = 1; potega(a, m) <= (unsigned)n; a++) {
        for (int b = a; potega(a, m) + potega(b, m) <= (unsigned)n; b++) {
            if (potega(a, m) + potega(b, m) == (unsigned)n)
                printf("%d^%d + %d^%d\n", a, m, b, m);
        }
    }
}

// 2.2.16a
void rek_all(int pozostaje, int m, int pierwszy) {
    for (int a = 1; potega(a, m) <= (unsigned)pozostaje; a++) {
        if (pierwszy)
            printf("%d^%d", a, m);
        else
            printf(" + %d^%d", a, m);
        if (potega(a, m) == (unsigned)pozostaje)
            printf("\n");
        else
            rek_all(pozostaje - potega(a, m), m, 0);
    }
}
void wszystkie_rozk³ady_na_potêgi(int n, int m) {
    rek_all(n, m, 1);
}

// 2.2.16b
void rek_unique(int pozostaje, int m, int min_a, int pierwszy) {
    for (int a = min_a; potega(a, m) <= (unsigned)pozostaje; a++) {
        if (pierwszy)
            printf("%d^%d", a, m);
        else
            printf(" + %d^%d", a, m);
        if (potega(a, m) == (unsigned)pozostaje)
            printf("\n");
        else
            rek_unique(pozostaje - potega(a, m), m, a, 0);
    }
}
void unikalne_rozk³ady_na_potêgi(int n, int m) {
    rek_unique(n, m, 1, 1);
}

// 2.2.17

void zlicz_i_wypisz_wywolania() {
    static int licznik = 0;
    licznik++;
    printf("%d\n", licznik);
}

int main2_2_17() {
    zlicz_i_wypisz_wywolania();
    zlicz_i_wypisz_wywolania();
    zlicz_i_wypisz_wywolania();
    return 0;
}


// 2.2.18

static double poprzednia_losowa;

void ustaw_pierwsza_wartosc_losowa(double x0) {
    poprzednia_losowa = x0;
}

double generuj_pseudolosowa() {
    poprzednia_losowa = 1.0 - poprzednia_losowa * poprzednia_losowa;
    return poprzednia_losowa;
}

int main2_2_18() {
    ustaw_pierwsza_wartosc_losowa(0.7);
    printf("%f\n", generuj_pseudolosowa());
    printf("%f\n", generuj_pseudolosowa());
    printf("%f\n", generuj_pseudolosowa());
    return 0;
}


// 2.2.19
#include <stdio.h>

int wczytaj_i_wypisz_sume() {
    static long long suma = 0;
    int x;
    scanf("%d", &x);
    suma += x;
    printf("%lld\n", suma);
    return x;
}

int main2_2_19() {
    wczytaj_i_wypisz_sume();
    wczytaj_i_wypisz_sume();
    wczytaj_i_wypisz_sume();
    return 0;
}


// 2.2.20


unsigned long long silnia(int n) {
    if (n <= 1)
        return 1ULL;
    return (unsigned long long)n * silnia(n - 1);
}

int main2_2_20() {
    int n;
    scanf("%d", &n);
    printf("%llu\n", silnia(n));
    return 0;
}


// 2.2.21

long wyraz_ciagu_2_2_21(int n) {
    if (n == 0)
        return 1L;
    return 2L * wyraz_ciagu_2_2_21(n - 1) + 5L;
}

int main2_2_21() {
    int n;
    scanf("%d", &n);
    printf("%ld\n", wyraz_ciagu_2_2_21(n));
    return 0;
}


// 2.2.22

long wyraz_ciagu_2_2_22(int n) {
    if (n == 0 || n == 1)
        return 1L;
    return wyraz_ciagu_2_2_22(n - 1)
         + 2L * wyraz_ciagu_2_2_22(n - 2)
         + 3L;
}

int main2_2_22() {
    int n;
    scanf("%d", &n);
    printf("%ld\n", wyraz_ciagu_2_2_22(n));
    return 0;
}

#include <stdio.h>

// 2.2.23
unsigned long long fibonacci(int n) {
    if (n == 0) return 0ULL;
    if (n == 1) return 1ULL;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main2_2_23() {
    int n;
    scanf("%d", &n);
    printf("%llu\n", fibonacci(n));
    return 0;
}


// 2.2.24
unsigned long long suma_wyrazow(int n) {
    if (n == 0 || n == 1) return 1ULL;
    unsigned long long sum = 0;
    for (int i = 0; i < n; i++)
        sum += suma_wyrazow(i);
    return sum;
}
int main2_2_24() {
    int n;
    scanf("%d", &n);
    printf("%llu\n", suma_wyrazow(n));
    return 0;
}


// 2.2.25
unsigned long long wyraz_parzystosc(int n) {
    if (n == 0 || n == 1) return 1ULL;
    unsigned long long prev = wyraz_parzystosc(n - 1);
    if (n % 2 == 0)
        return prev + (unsigned long long)n;
    else
        return prev * (unsigned long long)n;
}
int main2_2_25() {
    int n;
    scanf("%d", &n);
    printf("%llu\n", wyraz_parzystosc(n));
    return 0;
}

// 2.2.26
unsigned long long wyraz_ciagu_2_2_26(int n) {
    if (n <= 2)
        return 1ULL;
    if (n % 3 == 0)       // n = 3·k
        return wyraz_ciagu_2_2_26(n - 1) + wyraz_ciagu_2_2_26(n - 2);
    else if (n % 3 == 1)  // n = 3·k + 1
        return 5ULL * wyraz_ciagu_2_2_26(n - 1) + 4ULL;
    else                  // n = 3·k + 2
        return wyraz_ciagu_2_2_26(n - 1);
}
int main2_2_26() {
    int n;
    scanf("%d", &n);
    printf("%llu\n", wyraz_ciagu_2_2_26(n));
    return 0;
}


// 2.2.27
unsigned long long wartosc_funkcji_2_2_27(int n, int m) {
    if (m == 0) return (unsigned long long)n;
    if (n == 0) return (unsigned long long)m;
    return wartosc_funkcji_2_2_27(n - 1, m)
         + wartosc_funkcji_2_2_27(n, m - 1)
         + wartosc_funkcji_2_2_27(n - 1, m - 1);
}
int main2_2_27() {
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%llu\n", wartosc_funkcji_2_2_27(n, m));
    return 0;
}


// 2.2.28
unsigned long long wartosc_funkcji_2_2_28(int n, int m) {
    if (m == 0)
        return (unsigned long long)n;
    if (n < m)
        return wartosc_funkcji_2_2_28(m, n);
    return (unsigned long long)(n - m)
         + wartosc_funkcji_2_2_28(n - 1, m)
         + wartosc_funkcji_2_2_28(n, m - 1);
}
int main2_2_28() {
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%llu\n", wartosc_funkcji_2_2_28(n, m));
    return 0;
}


// 2.2.29
unsigned long long nwd_rekurencyjny(int n, int m) {
    if (m == 0)
        return (unsigned long long)n;
    return nwd_rekurencyjny(m, n % m);
}
int main2_2_29() {
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%llu\n", nwd_rekurencyjny(n, m));
    return 0;
}

//ROZDZIAL 3
//3.2 ZADANIA

// 3.2.1
int mniejsza(int *a, int *b) {
    if (*a < *b)
        return *a;
    else
        return *b;
}
int main3_2_1() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", mniejsza(&x, &y));
    return 0;
}


// 3.2.2
int *adres_mniejszej(int *a, int *b) {
    if (*a < *b)
        return a;
    else
        return b;
}
int main3_2_2() {
    int x, y, *p;
    scanf("%d %d", &x, &y);
    p = adres_mniejszej(&x, &y);
    printf("%d\n", *p);
    return 0;
}


// 3.2.3
void zamien(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int main3_2_3() {
    int x, y;
    scanf("%d %d", &x, &y);
    zamien(&x, &y);
    printf("%d %d\n", x, y);
    return 0;
}


// 3.2.4
void zamien_jesli(int *a, int *b) {
    if (*b < *a) {
        int tmp = *a;
        *a = *b;
        *b = tmp;
    }
}
int main3_2_4() {
    int x, y;
    scanf("%d %d", &x, &y);
    zamien_jesli(&x, &y);
    printf("%d %d\n", x, y);
    return 0;
}


// 3.2.5
int suma(const int *a, const int *b) {
    if (a == NULL || b == NULL) return 0;
    return *a + *b;
}
int main3_2_5() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", suma(&x, &y));
    return 0;
}


// 3.2.6
void przypisz(int n, int *w) {
    if (w != NULL)
        *w = n;
}
int main3_2_6() {
    int n, w;
    scanf("%d", &n);
    przypisz(n, &w);
    printf("%d\n", w);
    return 0;
}

// 3.2.9
int *stworz_int() {
    int *p = malloc(sizeof(int));
    return p;
}
int main3_2_9() {
    int *p = stworz_int();
    *p = 0;
    printf("%d\n", *p);
    free(p);
    return 0;
}


// 3.2.10
double *stworz_double() {
    double *p = malloc(sizeof(double));
    return p;
}
int main3_2_10() {
    double *p = stworz_double();
    *p = 0.0;
    printf("%f\n", *p);
    free(p);
    return 0;
}


// 3.2.11
int *stworz_tablicê_int(int n) {
    int *p = malloc(n * sizeof(int));
    return p;
}
int main3_2_11() {
    int n;
    scanf("%d", &n);
    int *tab = stworz_tablicê_int(n);
    for (int i = 0; i < n; i++) {
        tab[i] = 0;
    }
    printf("%d\n", tab[0]);
    free(tab);
    return 0;
}


// 3.2.12
double *stworz_tablicê_double(int n) {
    double *p = malloc(n * sizeof(double));
    return p;
}
int main3_2_12() {
    int n;
    scanf("%d", &n);
    double *tab = stworz_tablicê_double(n);
    for (int i = 0; i < n; i++) {
        tab[i] = 0.0;
    }
    printf("%f\n", tab[0]);
    free(tab);
    return 0;
}


// 3.2.13
double wywo³aj_funkcjê(double (*f)(int), int x) {
    return f(x);
}
double moja_funkcja(int x) {
    return (double)x;
}
int main3_2_13() {
    int x;
    scanf("%d", &x);
    printf("%f\n", wywo³aj_funkcjê(moja_funkcja, x));
    return 0;
}


// 3.2.14
bool porównaj_funkcje(int (*f1)(int), int (*f2)(int), unsigned int n) {
    for (unsigned int i = 0; i <= n; i++) {
        if (f1(i) != f2(i)) {
            return false;
        }
    }
    return true;
}
int funkcja1(int x) {
    return x;
}
int funkcja2(int x) {
    return x;
}
int main3_2_14() {
    unsigned int n;
    scanf("%u", &n);
    if (porównaj_funkcje(funkcja1, funkcja2, n)) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    return 0;
}


// 3.2.15
void kopiuj_wartoœæ(const int *src, int *dst) {
    *dst = *src;
}
int main3_2_15() {
    int x, y;
    scanf("%d %d", &x, &y);
    kopiuj_wartoœæ(&x, &y);
    printf("%d\n", y);
    return 0;
}


// 3.2.16
void kopiuj_wartoœæ_const(const int * const src, int * const dst) {
    *dst = *src;
}
int main3_2_16() {
    int x, y;
    scanf("%d %d", &x, &y);
    kopiuj_wartoœæ_const(&x, &y);
    printf("%d\n", y);
    return 0;
}

//RODZIAL 4
//4.2 ZADANIA

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

// 4.2.1a
void zeruj(int n, int tab[]) {
    for (int i = 0; i < n; i++) {
        tab[i] = 0;
    }
}
int main4_2_1a() {
    int n;
    scanf("%d", &n);
    int tab[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
    zeruj(n, tab);
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
    return 0;
}


// 4.2.1b
void indeksuj(int n, int tab[]) {
    for (int i = 0; i < n; i++) {
        tab[i] = i;
    }
}
int main4_2_1b() {
    int n;
    scanf("%d", &n);
    int tab[n];
    indeksuj(n, tab);
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
    return 0;
}


// 4.2.1c
void podwoj(int n, int tab[]) {
    for (int i = 0; i < n; i++) {
        tab[i] = tab[i] * 2;
    }
}
int main4_2_1c() {
    int n;
    scanf("%d", &n);
    int tab[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
    podwoj(n, tab);
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
    return 0;
}


// 4.2.1d
void bezwzgledne(int n, int tab[]) {
    for (int i = 0; i < n; i++) {
        if (tab[i] < 0) {
            tab[i] = -tab[i];
        }
    }
}
int main4_2_1d() {
    int n;
    scanf("%d", &n);
    int tab[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
    bezwzgledne(n, tab);
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
    return 0;
}


// 4.2.2a
double srednia(int n, int tab[]) {
    long long suma = 0;
    for (int i = 0; i < n; i++) {
        suma += tab[i];
    }
    return (double)suma / n;
}
int main4_2_2a() {
    int n;
    scanf("%d", &n);
    int tab[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
    printf("%f\n", srednia(n, tab));
    return 0;
}


// 4.2.2b
long long suma(int n, int tab[]) {
    long long s = 0;
    for (int i = 0; i < n; i++) {
        s += tab[i];
    }
    return s;
}
int main4_2_2b() {
    int n;
    scanf("%d", &n);
    int tab[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
    printf("%lld\n", suma(n, tab));
    return 0;
}


// 4.2.2c
long long suma_kwadratow(int n, int tab[]) {
    long long s = 0;
    for (int i = 0; i < n; i++) {
        s += (long long)tab[i] * tab[i];
    }
    return s;
}
int main4_2_2c() {
    int n;
    scanf("%d", &n);
    int tab[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
    printf("%lld\n", suma_kwadratow(n, tab));
    return 0;
}


// 4.2.3
double srednia_const(int n, const int tab[]) {
    long long s = 0;
    for (int i = 0; i < n; i++) {
        s += tab[i];
    }
    return (double)s / n;
}
int main4_2_3() {
    int n;
    scanf("%d", &n);
    int tab[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
    printf("%f\n", srednia_const(n, tab));
    return 0;
}


// 4.2.4
double srednia_geometryczna(unsigned int n, const unsigned int tab[]) {
    double logsum = 0.0;
    for (unsigned int i = 0; i < n; i++) {
        logsum += log((double)tab[i]);
    }
    return exp(logsum / n);
}
int main4_2_4() {
    unsigned int n;
    scanf("%u", &n);
    unsigned int tab[n];
    for (unsigned int i = 0; i < n; i++) {
        scanf("%u", &tab[i]);
    }
    printf("%f\n", srednia_geometryczna(n, tab));
    return 0;
}


// 4.2.5
int najwieksza_pierwsza(int n) {
    int size = n;
    bool *sito = malloc(size * sizeof(bool));
    for (int i = 0; i < size; i++) {
        sito[i] = true;
    }
    sito[0] = false;
    sito[1] = false;
    for (int p = 2; p * p < size; p++) {
        if (sito[p]) {
            for (int k = p * p; k < size; k += p) {
                sito[k] = false;
            }
        }
    }
    for (int i = n - 1; i >= 2; i--) {
        if (sito[i]) {
            free(sito);
            return i;
        }
    }
    free(sito);
    return -1;
}
int main4_2_5() {
    int n;
    scanf("%d", &n);
    printf("%d\n", najwieksza_pierwsza(n));
    return 0;
}

// 4.2.6a
void kopiuj_forward(int n, int tab1[], int tab2[]) {
    for (int i = 0; i < n; i++) {
        tab2[i] = tab1[i];
    }
}
int main4_2_6a() {
    int n;
    scanf("%d", &n);
    int tab1[n], tab2[n];
    for (int i = 0; i < n; i++) scanf("%d", &tab1[i]);
    kopiuj_forward(n, tab1, tab2);
    for (int i = 0; i < n; i++) printf("%d ", tab2[i]);
    printf("\n");
    return 0;
}

// 4.2.6b
void kopiuj_reverse(int n, int tab1[], int tab2[]) {
    for (int i = 0; i < n; i++) {
        tab2[n-1-i] = tab1[i];
    }
}
int main4_2_6b() {
    int n;
    scanf("%d", &n);
    int tab1[n], tab2[n];
    for (int i = 0; i < n; i++) scanf("%d", &tab1[i]);
    kopiuj_reverse(n, tab1, tab2);
    for (int i = 0; i < n; i++) printf("%d ", tab2[i]);
    printf("\n");
    return 0;
}

// 4.2.7a
void suma_elem(int n, int tab1[], int tab2[], int tab3[]) {
    for (int i = 0; i < n; i++) {
        tab3[i] = tab1[i] + tab2[i];
    }
}
int main4_2_7a() {
    int n;
    scanf("%d", &n);
    int tab1[n], tab2[n], tab3[n];
    for (int i = 0; i < n; i++) scanf("%d", &tab1[i]);
    for (int i = 0; i < n; i++) scanf("%d", &tab2[i]);
    suma_elem(n, tab1, tab2, tab3);
    for (int i = 0; i < n; i++) printf("%d ", tab3[i]);
    printf("\n");
    return 0;
}

// 4.2.7b
void max_elem(int n, int tab1[], int tab2[], int tab3[]) {
    for (int i = 0; i < n; i++) {
        if (tab1[i] > tab2[i])
            tab3[i] = tab1[i];
        else
            tab3[i] = tab2[i];
    }
}
int main4_2_7b() {
    int n;
    scanf("%d", &n);
    int tab1[n], tab2[n], tab3[n];
    for (int i = 0; i < n; i++) scanf("%d", &tab1[i]);
    for (int i = 0; i < n; i++) scanf("%d", &tab2[i]);
    max_elem(n, tab1, tab2, tab3);
    for (int i = 0; i < n; i++) printf("%d ", tab3[i]);
    printf("\n");
    return 0;
}

// 4.2.7c
void rotate_three(int n, int tab1[], int tab2[], int tab3[]) {
    for (int i = 0; i < n; i++) {
        int a = tab1[i], b = tab2[i], c = tab3[i];
        tab2[i] = a;
        tab3[i] = b;
        tab1[i] = c;
    }
}
int main4_2_7c() {
    int n;
    scanf("%d", &n);
    int tab1[n], tab2[n], tab3[n];
    for (int i = 0; i < n; i++) scanf("%d", &tab1[i]);
    for (int i = 0; i < n; i++) scanf("%d", &tab2[i]);
    for (int i = 0; i < n; i++) scanf("%d", &tab3[i]);
    rotate_three(n, tab1, tab2, tab3);
    for (int i = 0; i < n; i++) printf("%d ", tab1[i]);
    printf("\n");
    for (int i = 0; i < n; i++) printf("%d ", tab2[i]);
    printf("\n");
    for (int i = 0; i < n; i++) printf("%d ", tab3[i]);
    printf("\n");
    return 0;
}

// 4.2.8a
void merge_forward(int n, int tab1[], int tab2[], double tab3[]) {
    for (int i = 0; i < n; i++) {
        tab3[i]     = tab1[i];
        tab3[i + n] = tab2[i];
    }
}
int main4_2_8a() {
    int n;
    scanf("%d", &n);
    int tab1[n], tab2[n];
    for (int i = 0; i < n; i++) scanf("%d", &tab1[i]);
    for (int i = 0; i < n; i++) scanf("%d", &tab2[i]);
    double tab3[2*n];
    merge_forward(n, tab1, tab2, tab3);
    for (int i = 0; i < 2*n; i++) printf("%f ", tab3[i]);
    printf("\n");
    return 0;
}

// 4.2.8b
void merge_alternate(int n, int tab1[], int tab2[], double tab3[]) {
    for (int i = 0; i < n; i++) {
        tab3[2*i]   = tab2[i];
        tab3[2*i+1] = tab1[i];
    }
}
int main4_2_8b() {
    int n;
    scanf("%d", &n);
    int tab1[n], tab2[n];
    for (int i = 0; i < n; i++) scanf("%d", &tab1[i]);
    for (int i = 0; i < n; i++) scanf("%d", &tab2[i]);
    double tab3[2*n];
    merge_alternate(n, tab1, tab2, tab3);
    for (int i = 0; i < 2*n; i++) printf("%f ", tab3[i]);
    printf("\n");
    return 0;
}

// 4.2.9
void sortuj3(int n, int tab1[], int tab2[], int tab3[]) {
    for (int i = 0; i < n; i++) {
        int a = tab1[i];
        int b = tab2[i];
        int c = tab3[i];
        int max = a;
        if (b > max) max = b;
        if (c > max) max = c;
        int min = a;
        if (b < min) min = b;
        if (c < min) min = c;
        int mid = a + b + c - max - min;
        tab1[i] = max;
        tab2[i] = mid;
        tab3[i] = min;
    }
}
int main4_2_9() {
    int n;
    scanf("%d", &n);
    int tab1[n], tab2[n], tab3[n];
    for (int i = 0; i < n; i++) scanf("%d", &tab1[i]);
    for (int i = 0; i < n; i++) scanf("%d", &tab2[i]);
    for (int i = 0; i < n; i++) scanf("%d", &tab3[i]);
    sortuj3(n, tab1, tab2, tab3);
    for (int i = 0; i < n; i++) printf("%d ", tab1[i]);
    printf("\n");
    for (int i = 0; i < n; i++) printf("%d ", tab2[i]);
    printf("\n");
    for (int i = 0; i < n; i++) printf("%d ", tab3[i]);
    printf("\n");
    return 0;
}

// 4.2.10a
int maksymalna_wartosc(int n, int tab[]) {
    int max = tab[0];
    for (int i = 1; i < n; i++) {
        if (tab[i] > max) {
            max = tab[i];
        }
    }
    return max;
}
int main4_2_10a() {
    int n;
    scanf("%d", &n);
    int tab[n];
    for (int i = 0; i < n; i++) scanf("%d", &tab[i]);
    printf("%d\n", maksymalna_wartosc(n, tab));
    return 0;
}

// 4.2.10b
int minimalna_wartosc(int n, int tab[]) {
    int min = tab[0];
    for (int i = 1; i < n; i++) {
        if (tab[i] < min) {
            min = tab[i];
        }
    }
    return min;
}
int main4_2_10b() {
    int n;
    scanf("%d", &n);
    int tab[n];
    for (int i = 0; i < n; i++) scanf("%d", &tab[i]);
    printf("%d\n", minimalna_wartosc(n, tab));
    return 0;
}

// 4.2.10c
int indeks_maksymalnego(int n, int tab[]) {
    int idx = 0;
    for (int i = 1; i < n; i++) {
        if (tab[i] > tab[idx]) {
            idx = i;
        }
    }
    return idx;
}
int main4_2_10c() {
    int n;
    scanf("%d", &n);
    int tab[n];
    for (int i = 0; i < n; i++) scanf("%d", &tab[i]);
    printf("%d\n", indeks_maksymalnego(n, tab));
    return 0;
}

// 4.2.10d
int indeks_minimalnego(int n, int tab[]) {
    int idx = 0;
    for (int i = 1; i < n; i++) {
        if (tab[i] < tab[idx]) {
            idx = i;
        }
    }
    return idx;
}
int main4_2_10d() {
    int n;
    scanf("%d", &n);
    int tab[n];
    for (int i = 0; i < n; i++) scanf("%d", &tab[i]);
    printf("%d\n", indeks_minimalnego(n, tab));
    return 0;
}

// 4.2.10e
int maksymalna_bezwzgledna(int n, int tab[]) {
    int max = abs(tab[0]);
    for (int i = 1; i < n; i++) {
        int v = abs(tab[i]);
        if (v > max) {
            max = v;
        }
    }
    return max;
}
int main4_2_10e() {
    int n;
    scanf("%d", &n);
    int tab[n];
    for (int i = 0; i < n; i++) scanf("%d", &tab[i]);
    printf("%d\n", maksymalna_bezwzgledna(n, tab));
    return 0;
}

// 4.2.10f
int indeks_maks_bezwzglednego(int n, int tab[]) {
    int idx = 0;
    for (int i = 1; i < n; i++) {
        if (abs(tab[i]) > abs(tab[idx])) {
            idx = i;
        }
    }
    return idx;
}
int main4_2_10f() {
    int n;
    scanf("%d", &n);
    int tab[n];
    for (int i = 0; i < n; i++) scanf("%d", &tab[i]);
    printf("%d\n", indeks_maks_bezwzglednego(n, tab));
    return 0;
}

// 4.2.11
double iloczyn_skalarny(int n, double v1[], double v2[]) {
    double suma = 0.0;
    for (int i = 0; i < n; i++) {
        suma = suma + v1[i] * v2[i];
    }
    return suma;
}
int main4_2_11() {
    int n;
    scanf("%d", &n);
    double tab1[n], tab2[n];
    for (int i = 0; i < n; i++) scanf("%lf", &tab1[i]);
    for (int i = 0; i < n; i++) scanf("%lf", &tab2[i]);
    printf("%f\n", iloczyn_skalarny(n, tab1, tab2));
    return 0;
}

// 4.2.12a
void odwroc(int n, int tab[]) {
    for (int i = 0; i < n/2; i++) {
        int tmp = tab[i];
        tab[i] = tab[n-1-i];
        tab[n-1-i] = tmp;
    }
}
int main4_2_12a() {
    int n;
    scanf("%d", &n);
    int tab[n];
    for (int i = 0; i < n; i++) scanf("%d", &tab[i]);
    odwroc(n, tab);
    for (int i = 0; i < n; i++) printf("%d ", tab[i]);
    printf("\n");
    return 0;
}

// 4.2.12b
void przesun_w_lewo(int n, int tab[]) {
    int pierwsza = tab[0];
    for (int i = 0; i < n-1; i++) {
        tab[i] = tab[i+1];
    }
    tab[n-1] = pierwsza;
}
int main4_2_12b() {
    int n;
    scanf("%d", &n);
    int tab[n];
    for (int i = 0; i < n; i++) scanf("%d", &tab[i]);
    przesun_w_lewo(n, tab);
    for (int i = 0; i < n; i++) printf("%d ", tab[i]);
    printf("\n");
    return 0;
}

// 4.2.12c
void przesun_w_prawo(int n, int tab[]) {
    int ostatnia = tab[n-1];
    for (int i = n-1; i > 0; i--) {
        tab[i] = tab[i-1];
    }
    tab[0] = ostatnia;
}
int main4_2_12c() {
    int n;
    scanf("%d", &n);
    int tab[n];
    for (int i = 0; i < n; i++) scanf("%d", &tab[i]);
    przesun_w_prawo(n, tab);
    for (int i = 0; i < n; i++) printf("%d ", tab[i]);
    printf("\n");
    return 0;
}

// 4.2.12d
void sortuj_rosnaco(int n, int tab[]) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (tab[j] > tab[j+1]) {
                int tmp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = tmp;
            }
        }
    }
}
int main4_2_12d() {
    int n;
    scanf("%d", &n);
    int tab[n];
    for (int i = 0; i < n; i++) scanf("%d", &tab[i]);
    sortuj_rosnaco(n, tab);
    for (int i = 0; i < n; i++) printf("%d ", tab[i]);
    printf("\n");
    return 0;
}

// 4.2.12e
void sortuj_malejaco(int n, int tab[]) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (tab[j] < tab[j+1]) {
                int tmp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = tmp;
            }
        }
    }
}
int main4_2_12e() {
    int n;
    scanf("%d", &n);
    int tab[n];
    for (int i = 0; i < n; i++) scanf("%d", &tab[i]);
    sortuj_malejaco(n, tab);
    for (int i = 0; i < n; i++) printf("%d ", tab[i]);
    printf("\n");
    return 0;
}

// 4.2.13
int *stworz_tablicê_int(int n) {
    return malloc(n * sizeof(int));
}
int main4_2_13() {
    int n;
    scanf("%d", &n);
    int *tab = stworz_tablicê_int(n);
    for (int i = 0; i < n; i++) {
        tab[i] = 0;
    }
    printf("%d\n", tab[0]);
    free(tab);
    return 0;
}

// 4.2.14
double *stworz_tablicê_double(int n) {
    return malloc(n * sizeof(double));
}
int main4_2_14() {
    int n;
    scanf("%d", &n);
    double *tab = stworz_tablicê_double(n);
    for (int i = 0; i < n; i++) {
        tab[i] = 0.0;
    }
    printf("%f\n", tab[0]);
    free(tab);
    return 0;
}

// 4.2.15
void zwolnij_int(int *tab) {
    free(tab);
}
int main4_2_15() {
    int n;
    scanf("%d", &n);
    int *tab = malloc(n * sizeof(int));
    zwolnij_int(tab);
    return 0;
}


// 4.2.16
void zwolnij_double(double *tab) {
    free(tab);
}
int main4_2_16() {
    int n;
    scanf("%d", &n);
    double *tab = malloc(n * sizeof(double));
    zwolnij_double(tab);
    return 0;
}


// 4.2.17
double *kopiuj_tablice_double(int n, double tab[]) {
    double *kop = malloc(n * sizeof(double));
    for (int i = 0; i < n; i++)
        kop[i] = tab[i];
    return kop;
}
int main4_2_17() {
    int n;
    scanf("%d", &n);
    double *tab = malloc(n * sizeof(double));
    for (int i = 0; i < n; i++)
        scanf("%lf", &tab[i]);
    double *kop = kopiuj_tablice_double(n, tab);
    for (int i = 0; i < n; i++)
        printf("%f ", kop[i]);
    printf("\n");
    free(tab);
    free(kop);
    return 0;
}


// 4.2.18
int *suma_wektorow(int n, int v1[], int v2[]) {
    int *sum = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        sum[i] = v1[i] + v2[i];
    return sum;
}
int main4_2_18() {
    int n;
    scanf("%d", &n);
    int *v1 = malloc(n * sizeof(int));
    int *v2 = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &v1[i]);
    for (int i = 0; i < n; i++)
        scanf("%d", &v2[i]);
    int *sum = suma_wektorow(n, v1, v2);
    for (int i = 0; i < n; i++)
        printf("%d ", sum[i]);
    printf("\n");
    free(v1);
    free(v2);
    free(sum);
    return 0;
}


// 4.2.19
int *filtruj_niezero(int n, int tab1[], int *new_n) {
    int count = 0;
    for (int i = 0; i < n; i++)
        if (tab1[i] != 0)
            count++;
    int *tab2 = malloc(count * sizeof(int));
    int j = 0;
    for (int i = 0; i < n; i++)
        if (tab1[i] != 0)
            tab2[j++] = tab1[i];
    *new_n = count;
    return tab2;
}
int main4_2_19() {
    int n;
    scanf("%d", &n);
    int *tab1 = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &tab1[i]);
    int new_n;
    int *tab2











































