using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace Recrutement_Dashboard.UserControls
{
    /// <summary>
    /// Logique d'interaction pour MembreControls.xaml
    /// </summary>
    public partial class MembreControls : UserControl
    {
        public static readonly DependencyProperty TitleProperty =
            DependencyProperty.Register("Title", typeof(string), typeof(MembreControls));
        public static readonly DependencyProperty UpPriceProperty =
            DependencyProperty.Register("UpPrice", typeof(string), typeof(MembreControls));
        public static readonly DependencyProperty DownPriceProperty =
            DependencyProperty.Register("DownPrice", typeof(string), typeof(MembreControls));
        public static readonly DependencyProperty IsActiveProperty =
            DependencyProperty.Register("IsActive", typeof(bool), typeof(MembreControls));
        public static readonly DependencyProperty ImageProperty =
            DependencyProperty.Register("Image", typeof(ImageSource), typeof(MembreControls));
        public MembreControls()
        {
            InitializeComponent();
        }

        public string Title
        {
            get { return (string)GetValue(TitleProperty); }
            set { SetValue(TitleProperty, value); }
        }

        public string UpPrice
        {
            get { return (string)GetValue(UpPriceProperty); }
            set { SetValue(UpPriceProperty, value); }
        }

        public string DownPrice
        {
            get { return (string)GetValue(DownPriceProperty); }
            set { SetValue(DownPriceProperty, value); }
        }

        public bool IsActive
        {
            get { return (bool)GetValue(IsActiveProperty); }
            set { SetValue(IsActiveProperty, value); }
        }

        public ImageSource Image
        {
            get { return (ImageSource)GetValue(ImageProperty); }
            set { SetValue(ImageProperty, value); }
        }
    }
}
