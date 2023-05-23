using System;
using System.Windows;
using System.Windows.Input;
using ResponsiveApp.Controllers;
using LiveCharts;
using LiveCharts.Defaults;
using LiveCharts.Wpf;

namespace ResponsiveApp
{
    /// <summary>
    /// Logique d'interaction pour MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        private bool IsMaximized = true;
        /*public string NomAffaire { get; set; }
        public int NombreAffaire { get; set; }
        public string jour { get; set; }
        public Int64 pourcentage { get; set; }
        public Int64 Montant { get; set; }
        public int valeur { get; set; }*/

        public MainWindow()
        {
            InitializeComponent();

            /*Taches tc = new Taches("Cart SIM Vendu", 7, DateTime.Now.ToString("m/d/yyyy"));
            this.NomAffaire = tc.Affaire;
            this.NombreAffaire = tc.NombreAffaire;
            this.jour = tc.JourAffaire;
            this.pourcentage = tc.Pourcenntage;
            this.Montant = tc.MontantAffaire;
            this.valeur = tc.ValeurAffaire;*/

            SeriesCollection = new SeriesCollection
            {
                new PieSeries
                {
                    Title = "SIM",
                    Values = new ChartValues<ObservableValue> { new ObservableValue(3) },
                    DataLabels = true
                },
                new PieSeries
                {
                    Title = "Telephone",
                    Values = new ChartValues<ObservableValue> { new ObservableValue(4) },
                    DataLabels = true
                },
                new PieSeries
                {
                    Title = "Crédit",
                    Values = new ChartValues<ObservableValue> { new ObservableValue(15) },
                    DataLabels = true
                }
            };

            //adding values or series will update and animate the chart automatically
            //SeriesCollection.Add(new PieSeries());
            //SeriesCollection[0].Values.Add(5);

            DataContext = this;
        }

        public SeriesCollection SeriesCollection { get; set; }
       

        private void Border_MouseDown(object sender, MouseButtonEventArgs e)
        {
            if (e.ChangedButton == MouseButton.Left)
            {
                this.DragMove();
            }
        }

        private void Border_MouseLeftButtonDown(object sender, MouseButtonEventArgs e)
        {
            if (e.ClickCount == 2)
            {
                if (IsMaximized)
                {
                    this.WindowState = WindowState.Normal;
                    this.Width = 1280;
                    this.Height = 720;

                    IsMaximized = false;
                }
                else
                {
                    this.WindowState = WindowState.Maximized;

                    IsMaximized = true;
                }
            }
        }

        private void Button_Click(object sender, RoutedEventArgs e)
        {
            System.Windows.Application.Current.Shutdown();
        }

        private void Button_Click_1(object sender, RoutedEventArgs e)
        {
            if (this.WindowState == WindowState.Maximized)
            {
                this.WindowState = WindowState.Normal;
                this.Width = 1280;
                this.Height = 720;

                IsMaximized = false;
            }
            else if (this.WindowState == WindowState.Normal)
            {
                this.WindowState = WindowState.Maximized;

                IsMaximized = true;
            }
        }

        private void Button_Click_2(object sender, RoutedEventArgs e)
        {
            if (this.WindowState == WindowState.Minimized)
            {
                this.WindowState = WindowState.Normal;
            }
            else if (this.WindowState == WindowState.Normal || this.WindowState == WindowState.Maximized)
            {
                this.WindowState = WindowState.Minimized;
            }
        }
    }
}
