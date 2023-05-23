using System.Windows;
using System.Windows.Controls;
using System.Windows.Media;

namespace Sale_DashBord.UserControls
{
    /// <summary>
    /// Logique d'interaction pour infoCard.xaml
    /// </summary>
    public partial class InfoCard : UserControl
    {
        public static readonly DependencyProperty TitleProperty = 
            DependencyProperty.Register("Title", typeof(string), typeof(InfoCard));
        public static readonly DependencyProperty SubTitleProperty =
            DependencyProperty.Register("SubTitle", typeof(string), typeof(InfoCard));
        public static readonly DependencyProperty TitleAmountProperty =
            DependencyProperty.Register("Amount", typeof(int), typeof(InfoCard));
        public static readonly DependencyProperty ImageProperty =
            DependencyProperty.Register("Image", typeof(ImageSource), typeof(InfoCard));

        public InfoCard()
        {
            InitializeComponent();
        }

        public string Title
        {
            get { return (string)GetValue(TitleProperty); }
            set { SetValue(TitleProperty, value); }
        }

        public string SubTitle
        {
            get { return (string)GetValue(SubTitleProperty); }
            set { SetValue(SubTitleProperty, value); }
        }

        public int Amount
        {
            get { return (int)GetValue(TitleAmountProperty); }
            set { SetValue(TitleAmountProperty, value); }
        }

        public ImageSource Image
        {
            get { return (ImageSource)GetValue(ImageProperty); }
            set { SetValue(ImageProperty, value); }
        }

    }
}
