using System;
using System.Windows;
using System.Windows.Controls;
using ResponsiveApp.Controllers;

namespace ResponsiveApp.UserControls
{
    /// <summary>
    /// Logique d'interaction pour TacheCard.xaml
    /// </summary>
    public partial class TacheCard : UserControl
    {
        

        public static readonly DependencyProperty AffaireProperty =
            DependencyProperty.Register("Affaire", typeof(string), typeof(TacheCard));
        public static readonly DependencyProperty MontantProperty =
           DependencyProperty.Register("Montant", typeof(string), typeof(TacheCard));
        public static readonly DependencyProperty NombreProperty =
           DependencyProperty.Register("Nombre", typeof(int), typeof(TacheCard));
        public static readonly DependencyProperty PourcentagetextProperty =
           DependencyProperty.Register("Pourcentage", typeof(int), typeof(TacheCard));
        public static readonly DependencyProperty ValueSliderProperty =
          DependencyProperty.Register("ValueSlider", typeof(string), typeof(TacheCard));
        public static readonly DependencyProperty JourProperty =
          DependencyProperty.Register("Jour", typeof(string), typeof(TacheCard));
        public static readonly DependencyProperty IconAffaireProperty =
          DependencyProperty.Register("IconAffaire", typeof(MahApps.Metro.IconPacks.PackIconMaterialKind), typeof(TacheCard));
        public static readonly DependencyProperty IsActiveProperty =
          DependencyProperty.Register("IsActive", typeof(bool), typeof(TacheCard));
        public static readonly DependencyProperty ColorProperty =
          DependencyProperty.Register("Color", typeof(string), typeof(TacheCard));

        public TacheCard()
        {
            InitializeComponent();
        }

        public string Affaire
        {
            get { return (String)GetValue(AffaireProperty); }
            set { SetValue(AffaireProperty, value); }
        }

        public string Montant
        {
            get { return (string)GetValue(MontantProperty); }
            set { SetValue(MontantProperty, value); }
        }

        public int Nombre
        {
            get { return (int)GetValue(NombreProperty); }
            set { SetValue(NombreProperty, value); }
        }

        public int Pourcentage
        {
            get { return (int)GetValue(PourcentagetextProperty); }
            set { SetValue(PourcentagetextProperty, value); }
        }

        public string ValueSlider
        {
            get { return (String)GetValue(ValueSliderProperty); }
            set { SetValue(ValueSliderProperty, value); }
        }

        public string Jour
        {
            get { return (string)GetValue(JourProperty); }
            set { SetValue(JourProperty, value); }
        }

        public MahApps.Metro.IconPacks.PackIconMaterialKind IconAffaire
        {
            get { return (MahApps.Metro.IconPacks.PackIconMaterialKind)GetValue(IconAffaireProperty); }
            set { SetValue(IconAffaireProperty, value); }
        }

        public bool IsActive
        {
            get { return (bool)GetValue(IsActiveProperty); }
            set { SetValue(IsActiveProperty, value); }
        }

        public string Color
        {
            get { return (String)GetValue(ColorProperty); }
            set { SetValue(ColorProperty, value); }
        }
    }
}
