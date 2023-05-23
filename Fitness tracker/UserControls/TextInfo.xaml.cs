using System;
using System.Windows;
using System.Windows.Controls;

namespace Fitness_tracker.UserControls
{
    /// <summary>
    /// Logique d'interaction pour TextInfo.xaml
    /// </summary>
    public partial class TextInfo : UserControl
    {
        public static readonly DependencyProperty TextProperty =
            DependencyProperty.Register("TextTop", typeof(string), typeof(TextInfo));
        public static readonly DependencyProperty TextMiddleProperty =
            DependencyProperty.Register("TextMiddle", typeof(string), typeof(TextInfo));
        public static readonly DependencyProperty TextBottomProperty =
            DependencyProperty.Register("TextBottom", typeof(string), typeof(TextInfo));
        public static readonly DependencyProperty IsactiveProperty =
            DependencyProperty.Register("Isactive", typeof(bool), typeof(TextInfo));
        public TextInfo()
        {
            InitializeComponent();
        }

        public string TextTop
        {
            get { return (String)GetValue(TextProperty); }
            set { SetValue(TextProperty, value); }
        }

        public string TextBottom
        {
            get { return (String)GetValue(TextBottomProperty); }
            set { SetValue(TextBottomProperty, value); }
        }

        public string TextMiddle
        {
            get { return (String)GetValue(TextMiddleProperty); }
            set { SetValue(TextMiddleProperty, value); }
        }

        public bool Isactive
        {
            get { return (bool)GetValue(IsactiveProperty); }
            set { SetValue(IsactiveProperty, value); }
        }
    }
}
