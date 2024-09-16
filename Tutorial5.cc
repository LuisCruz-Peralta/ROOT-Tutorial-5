void Tutorial5(){

  TRandom2 *rand = new TRandom2(1);
  
  TH1F *hist = new TH1F("hist","Histogram",100,0,100);
  
  for (int i=0; i<10000; i++){ //Ciclo de n iteraciones para generar numeros aleatorios
      double r = rand->Rndm()*100; //La funcion genera numeros aleatorios entre 0 y 1
      cout << r << endl;
      hist->Fill(r); //Se introducen los datos al histograma
 }
  TCanvas *c1 = new TCanvas();
  hist->GetYaxis()->SetRangeUser(0,150); //Rango del eje Y
  hist->Draw();
}
