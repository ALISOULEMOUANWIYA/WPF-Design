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

namespace ResponsiveApp.UserControls
{
    /// <summary>
    /// Logique d'interaction pour TableUser.xaml
    /// </summary>
    public partial class TableUser : UserControl
    {
        public static DependencyProperty UserNameProperty =
           DependencyProperty.Register("UserName", typeof(string), typeof(TableUser));
        public static DependencyProperty LastNameProperty =
          DependencyProperty.Register("LastName", typeof(string), typeof(TableUser));
        public static DependencyProperty PriceProperty =
            DependencyProperty.Register("Price", typeof(string), typeof(TableUser));
        public static DependencyProperty IsLevelUpProperty =
            DependencyProperty.Register("IsLevelUp", typeof(bool), typeof(TableUser));
        public static DependencyProperty FlagProperty =
            DependencyProperty.Register("Flag", typeof(ImageSource), typeof(TableUser));

        public TableUser()
        {
            InitializeComponent();
        }

        public String LastName
        {
            get { return (string)GetValue(LastNameProperty); }
            set { SetValue(UserNameProperty, value); }
        }

        public String UserName
        {
            get { return (string)GetValue(UserNameProperty); }
            set { SetValue(UserNameProperty, value); }
        }

        public String Price
        {
            get { return (string)GetValue(PriceProperty); }
            set { SetValue(PriceProperty, value); }
        }

        public bool IsLevelUp
        {
            get { return (bool)GetValue(IsLevelUpProperty); }
            set { SetValue(IsLevelUpProperty, value); }
        }

        public ImageSource Flag
        {
            get { return (ImageSource)GetValue(FlagProperty); }
            set { SetValue(FlagProperty, value); }
        }
    }
}
