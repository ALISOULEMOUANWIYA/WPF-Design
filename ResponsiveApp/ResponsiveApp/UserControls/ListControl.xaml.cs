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
    /// Logique d'interaction pour ListControl.xaml
    /// </summary>
    public partial class ListControl : UserControl
    {
        public static DependencyProperty TransferTypeProperty =
           DependencyProperty.Register("TransferType", typeof(string), typeof(ListControl));
        public static DependencyProperty NameUserProperty =
          DependencyProperty.Register("NameUser", typeof(string), typeof(ListControl));
        public static DependencyProperty MontantProperty =
            DependencyProperty.Register("Montant", typeof(string), typeof(ListControl));
        public static DependencyProperty IsLevelUpProperty =
            DependencyProperty.Register("IsLevelUp", typeof(bool), typeof(ListControl));
        public static DependencyProperty DateTimeProperty =
            DependencyProperty.Register("DateTime", typeof(string), typeof(ListControl));

        public ListControl()
        {
            InitializeComponent();
        }

        public String TransferType
        {
            get { return (string)GetValue(TransferTypeProperty); }
            set { SetValue(TransferTypeProperty, value); }
        }

        public String NameUser
        {
            get { return (string)GetValue(NameUserProperty); }
            set { SetValue(NameUserProperty, value); }
        }

        public String Montant
        {
            get { return (string)GetValue(MontantProperty); }
            set { SetValue(MontantProperty, value); }
        }

        public bool IsLevelUp
        {
            get { return (bool)GetValue(IsLevelUpProperty); }
            set { SetValue(IsLevelUpProperty, value); }
        }

        public string DateTime
        {
            get { return (string)GetValue(DateTimeProperty); }
            set { SetValue(DateTimeProperty, value); }
        }
    }
}
