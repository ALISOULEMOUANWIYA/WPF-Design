using System.Collections.ObjectModel;
using System.Windows;
using System.Windows.Input;
using System.Windows.Media;

namespace DataGride_Dashboard
{
    /// <summary>
    /// Logique d'interaction pour MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        private bool IsMaximized = true;


        public MainWindow()
        {
            InitializeComponent();
            this.MaxHeight = SystemParameters.MaximizedPrimaryScreenHeight;

            var converter = new BrushConverter();
            ObservableCollection<Membre> membres = new ObservableCollection<Membre>();

            //Create DateGride Items Info
            membres.Add(new Membre
            {
                Number = "1",
                Character="J",
                BgColor=(Brush)converter.ConvertFromString("#1098ad"),
                Name= "John",
                Position= "Coach",
                Email="John@gmail.com",
                Phone="70-253-20-10"
            });
            membres.Add(new Membre
            {
                Number = "2",
                Character = "R",
                BgColor = (Brush)converter.ConvertFromString("#1e88e5"),
                Name = "Reza Alivi",
                Position = "Administrator",
                Email = "John@gmail.com",
                Phone = "78-152-16-15"
            });
            membres.Add(new Membre
            {
                Number = "3",
                Character = "D",
                BgColor = (Brush)converter.ConvertFromString("#ff8f00"),
                Name = "Dennis Castillo",
                Position = "Coach",
                Email = "Reza@gmail.com",
                Phone = "77-923-83-01"
            });
            membres.Add(new Membre
            {
                Number = "4",
                Character = "G",
                BgColor = (Brush)converter.ConvertFromString("#ff5252"),
                Name = "Gabriel Cox",
                Position = "Coach",
                Email = "Gabriel@gmail.com",
                Phone = "70-355-24-25"
            });
            membres.Add(new Membre
            {
                Number = "5",
                Character = "L",
                BgColor = (Brush)converter.ConvertFromString("#0ca678"),
                Name = "Lena Jones",
                Position = "Manager",
                Email = "Lena@gmail.com",
                Phone = "78-142-81-54"
            });
            membres.Add(new Membre
            {
                Number = "6",
                Character = "B",
                BgColor = (Brush)converter.ConvertFromString("#6741d9"),
                Name = "Benjamin Caliword",
                Position = "Administrator",
                Email = "Benjamin@gmail.com",
                Phone = "70-763-83-19"
            });
            membres.Add(new Membre
            {
                Number = "7",
                Character = "S",
                BgColor = (Brush)converter.ConvertFromString("#ff6d00"),
                Name = "Sophia Murs",
                Position = "Coach",
                Email = "Sophia@gmail.com",
                Phone = "70-182-73-93"
            });
            membres.Add(new Membre
            {
                Number = "8",
                Character = "A",
                BgColor = (Brush)converter.ConvertFromString("#ff5252"),
                Name = "Ali Pormand",
                Position = "Manager",
                Email = "Ali@gmail.com",
                Phone = "70-837-18-81"
            });
            membres.Add(new Membre
            {
                Number = "9",
                Character = "F",
                BgColor = (Brush)converter.ConvertFromString("#1e88e5"),
                Name = "Frank Underwood",
                Position = "Manager",
                Email = "Frank@gmail.com",
                Phone = "70-837-82-28"
            });
            membres.Add(new Membre
            {
                Number = "10",
                Character = "S",
                BgColor = (Brush)converter.ConvertFromString("#0ca678"),
                Name = "Saeed Dasman",
                Position = "Coach",
                Email = "Saeed@gmail.com",
                Phone = "70-273-28-83"
            });

            membersDataGrid.ItemsSource = membres;
        }



        private void Border_MouseDown(object sender, MouseButtonEventArgs e)
        {
            if(e.ChangedButton == MouseButton.Left)
            {
                this.DragMove();
            }
        }

        private void Border_MouseLeftButtonDown(object sender, MouseButtonEventArgs e)
        {
            if(e.ClickCount == 2)
            {
                if (IsMaximized)
                {
                    this.WindowState = WindowState.Normal;
                    this.Width = 1080;
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
                this.Width = 1080;
                this.Height = 720;

                IsMaximized = false;
            }
            else if(this.WindowState == WindowState.Normal)
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

    public class Membre
    {
        public string Character { get; set; }
        public string Number { get; set; }
        public string Name { get; set; }
        public string Position { get; set; }
        public string Email { get; set; }
        public string Phone { get; set; }
        public Brush BgColor { get; set; }
    }
}
