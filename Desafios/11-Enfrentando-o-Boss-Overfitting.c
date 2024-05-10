#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class FortalezaCodeMiner {
public:
  FortalezaCodeMiner(const vector<int>& equipamentos) : equipamentos_(equipamentos) {
    // Ordena os equipamentos para que a busca binária funcione corretamente
    sort(equipamentos_.begin(), equipamentos_.end());
  }

  bool possui_equipamento(int equipamento) {
    // Implementa a busca binária para verificar se o equipamento está presente
    int inicio = 0;
    int fim = equipamentos_.size() - 1;

    while (inicio <= fim) {
      int meio = inicio + (fim - inicio) / 2;

      if (equipamentos_[meio] == equipamento) {
        return true;
      }

      if (equipamentos_[meio] < equipamento) {
        inicio = meio + 1;
      } else {
        fim = meio - 1;
      }
    }

    return false;
  }

private:
  vector<int> equipamentos_;
};

class Overfitting {
public:
  Overfitting(const vector<int>& pontos_fracos) : pontos_fracos_(pontos_fracos) {}

  const vector<int>& pontos_fracos() const {
    return pontos_fracos_;
  }

private:
  vector<int> pontos_fracos_;
};

int main() {
  vector<int> pontos_fracos_chefao;
  vector<int> equipamentos_fortaleza;

  int n;

  // Lê os pontos fracos do Chefão Overfitting.
  cin >> n;
  for (int i = 0; i < n; i++) {
    int ponto_fraco;
    cin >> ponto_fraco;
    pontos_fracos_chefao.push_back(ponto_fraco);
  }

  // Lê os equipamentos da Fortaleza dos CodeMiners.
  cin >> n;
  for (int i = 0; i < n; i++) {
    int equipamento;
    cin >> equipamento;
    equipamentos_fortaleza.push_back(equipamento);
  }

  // Cria objetos dos tipos Overfitting e FortalezaCodeMiner
  Overfitting chefao(pontos_fracos_chefao);
  FortalezaCodeMiner fortaleza(equipamentos_fortaleza);

  // Verifica se todos os pontos fracos do Chefão possuem equipamentos na Fortaleza
  bool vitoria = true;
  for (int ponto_fraco : chefao.pontos_fracos()) {
    if (!fortaleza.possui_equipamento(ponto_fraco)) {
      vitoria = false;
      break;
    }
  }

  // Imprimir resultado da batalha
  cout << (vitoria ? "Vencemos!" : "Perdemos!") << endl;

  return 0;
}
