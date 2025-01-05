#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <string>
#include <utility>

// 1. Dado um vetor de inteiros arr, conte a frequência de cada inteiro.
std::unordered_map<int,int> contarFrequencia(std::vector<int>& arr) {
    std::unordered_map<int, int> frequencia;

    for (int num : arr) {
        frequencia[num]++;
    }

    return frequencia;
}

// 2. Dado um vetor de inteiros arr, retorne a posição do primeiro elemento do vetor que não tem duplicata. 
// Se todos os elementos ocorrerrem pelo menos duas vezes, retorne -1.
int primeiroUnico(std::vector<int>& arr) {
    std::unordered_map<int, int> frequencia;

    for (int num : arr) {
        frequencia[num]++;
    }

    for (int i = 0; i < arr.size(); i++) {
        if (frequencia[arr[i]] == 1) {
            return static_cast<int>(i);
        }
    }

    return -1;
}

// 3. Dado um vetor de inteiros arr, retorne um par de inteiros que somados resultam em um valor k dado.
std::pair<int, int> twosum(std::vector<int>& arr, int k) {
    std::unordered_set<int> elementos;

    for (int num : arr) {
        int complemento = k - num;
        if (elementos.find(complemento) != elementos.end()) {
            return {complemento, num};
        }
        elementos.insert(num);
    }

    return {-1, -1};
}

// 4. Dado um vetor de inteiros arr, retorne true se arr contém algum elemento repetido, e false caso contrário.
bool temDuplicatas(std::vector<int>& arr) {
    std::unordered_set<int> elementos;

    for (int num : arr) {
        if (elementos.find(num) != elementos.end()) {
            return true;
        }
        elementos.insert(num);
    }

    return false;
}

// 5. Dado um vetor de inteiros arr, retorne um vetor com os elementos de arr, mas sem elementos repetidos.
// Os elementos no vetor de saída precisam estar na mesma ordem que os elementos do vetor de entrada.
std::vector<int> semDuplicatas(std::vector<int>& arr) {
    std::unordered_set<int> elementos;
    std::vector<int> resultado;

    for (int num : arr) {
        if (elementos.find(num) == elementos.end()) {
            elementos.insert(num);
            resultado.push_back(num);
        }
    }

    return resultado;
}

// Dado um vetor de strings palavras, retorne um vetor de vetores, onde cada vetor interno contém todas
// as palavras que são anagramas entre si. Por exemplo, se palavras = {"ate", "eat", "tea", "bat",
// "tab"}, então a saída deve ser {{"ate", "eat", "tea"}, {"bat", "tab"}}.
std::vector<std::vector<std::string>> agruparAnagramas(std::vector<std::string>& palavras) {
    std::unordered_map<std::string, std::vector<std::string>> grupos;

}

// Dado um vetor arr não-ordenado de inteiros, retorne o comprimento da maior sequência de inteiros
// consecutivos em arr. Por exemplo, se arr = {1, 9, 3, 10, 4, 20, 2}, então a saída deve ser 4, pois
// a maior sequência de inteiros consecutivos é {1, 3, 4, 2}. Note que os elementos desta sequência não
// precisam estar um ao lado do outro no vetor arr
int maiorSequenciaConsecutivos(std::vector<int>& arr) {
    std::unordered_set<int> elementos(arr.begin(), arr.end()); 
    int resultado = 0;

    for (int num : arr) {
        if (elementos.find(num-1) == elementos.end()) {
            int comprimento = 1;
            int atual = num+1;

            while (elementos.find(atual) != elementos.end()) {
                comprimento++;
                atual++;
            }

            if (comprimento > resultado) {
                resultado = comprimento;
            }
        }
    }

    return resultado;
}

// Dado um vetor de inteiros arr, retorne true se existe pelo menos um subvetor de arr cuja soma dos
// elementos é igual a 0, ou false caso contrário.
bool temSubvetorSomaZero(std::vector<int>& arr) {
    std::unordered_set<int> elementos;

    for (int num : arr) {
        int soma = num;
        if (elementos.find(-soma) != elementos.end()) {
            return true;
        }
    }

    return false;
}

// Dado um vetor de inteiros arr, retorne true se existe pelo menos um subvetor de arr cuja soma dos
// elementos é igual a um valor k dado, ou false caso contrário.
bool temSubvetorSomaK(std::vector<int>& arr, int k) {
    std::unordered_set<int> elementos;

    for (int num : arr) {
        int complemento = k - num;
        if (elementos.find(complemento) != elementos.end()) {
            return true;
        }
        elementos.insert(num);
    }

    return false;
}