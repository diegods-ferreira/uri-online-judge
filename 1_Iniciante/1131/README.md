<h6 align="center">URI Online Judge | 1131</h6>
<h2 align="center">
  <a href="https://www.urionlinejudge.com.br/judge/pt/problems/view/1131">
    Grenais
  </a>
</h2>
<h5 align="center">Adaptado por Neilor Tonin, URI  Brasil</h5>
<p align="center"><b>Timelimit: 1</b></p>
<hr>
<br>
<p>
  A Federação Gaúcha de Futebol contratou você para escrever um programa para fazer uma estatística do resultado de vários GRENAIS. Escreva um programa para ler o número de gols marcados pelo Inter e pelo Grêmio em um GRENAL. Logo após escrever a mensagem "Novo grenal (1-sim 2-nao)" e solicitar uma resposta. Se a resposta for 1, o algoritmo deve ser executado novamente solicitando o número de gols marcados pelos times em uma nova partida, caso contrário deve ser encerrado imprimindo:
</p>
<br>
<ul>
  <li>Quantos GRENAIS fizeram parte da estatística.</li>
  <li>O número de vitórias do Inter.</li>
  <li>O número de vitórias do Grêmio.</li>
  <li>O número de Empates.</li>
  <li>Uma mensagem indicando qual o time que venceu o maior número de GRENAIS (ou "Nao houve vencedor", caso termine empatado).</li>
</ul>
<br>
<h3>Entrada</h3>
<p>
  O arquivo de entrada contém 2 valores inteiros, correspondentes aos gols marcados pelo Inter e pelo Grêmio respectivamente. Em seguida háverá um inteiro (1 ou 2), correspondente à repetição do programa.
</p>
<br>
<h3>Saída</h3>
<p>
  Após cada leitura dos gols, deve ser impressa a mensagem "Novo grenal (1-sim 2-nao)". Quando o algoritmo for encerrado devem ser mostradas as estatísticas conforme a descrição apresentada acima. Obs: a palavra "Gremio" deve ser impressa sem acento, conforme o exemplo abaixo.
</p>
<br>
<code>
  <table width="100%">
    <thead>
      <th>Exemplo de Entrada</th>
      <th>Exemplo de Saída</th>
    </thead>
    <tbody>
      <tr>
        <td>
          3 2<br>
          1<br>
          2 3<br>
          1<br>
          3 1<br>
          2
        </td>
        <td>
          Novo grenal (1-sim 2-nao)<br>
          Novo grenal (1-sim 2-nao)<br>
          Novo grenal (1-sim 2-nao)<br>
          3 grenais<br>
          Inter:2<br>
          Gremio:1<br>
          Empates:0<br>
          Inter venceu mais
        </td>
      </tr>
    </tbody>
  </table>
</code>