using System;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Media;

namespace Recrutement_Dashboard.UserControls
{
    /// <summary>
    /// Logique d'interaction pour InfUserCard.xaml
    /// </summary>
    public partial class InfUserCard : UserControl
    {
        public static readonly DependencyProperty TitleProperty =
            DependencyProperty.Register("Title", typeof(string), typeof(InfUserCard));
        public static readonly DependencyProperty DecsProperty =
           DependencyProperty.Register("Desc", typeof(string), typeof(InfUserCard));
        public static readonly DependencyProperty PourtcenrageProperty =
           DependencyProperty.Register("Pourtcenrage", typeof(string), typeof(InfUserCard));
        public static readonly DependencyProperty BottomtextProperty =
           DependencyProperty.Register("Bottomtext", typeof(string), typeof(InfUserCard));
        public static readonly DependencyProperty DaysProperty =
          DependencyProperty.Register("Days", typeof(string), typeof(InfUserCard));
        public static readonly DependencyProperty ValueProperty =
          DependencyProperty.Register("Value", typeof(int), typeof(InfUserCard));
        public static readonly DependencyProperty IsActiveProperty =
          DependencyProperty.Register("IsActive", typeof(bool), typeof(InfUserCard));
        public static readonly DependencyProperty IconProperty =
          DependencyProperty.Register("Icon", typeof(MahApps.Metro.IconPacks.PackIconMaterialKind), typeof(InfUserCard));

        public InfUserCard()
        {
            InitializeComponent();
        }

        public string Title
        {
            get { return (String)GetValue(TitleProperty); }
            set { SetValue(TitleProperty, value); }
        }

        public string Desc
        {
            get { return (String)GetValue(DecsProperty); }
            set { SetValue(DecsProperty, value); }
        }

        public string Pourtcenrage
        {
            get { return (String)GetValue(PourtcenrageProperty); }
            set { SetValue(PourtcenrageProperty, value); }
        }

        public string Bottomtext
        {
            get { return (String)GetValue(BottomtextProperty); }
            set { SetValue(BottomtextProperty, value); }
        }

        public string Days
        {
            get { return (String)GetValue(DaysProperty); }
            set { SetValue(DaysProperty, value); }
        }

        public int Value
        {
            get { return (int)GetValue(ValueProperty); }
            set { SetValue(ValueProperty, value); }
        }

        public bool IsActive
        {
            get { return (bool)GetValue(IsActiveProperty); }
            set { SetValue(IsActiveProperty, value); }
        }

        public MahApps.Metro.IconPacks.PackIconMaterialKind Icon
        {
            get { return (MahApps.Metro.IconPacks.PackIconMaterialKind)GetValue(IconProperty); }
            set { SetValue(IconProperty, value); }
        }
    }
}
