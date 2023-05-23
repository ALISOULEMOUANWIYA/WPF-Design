using System;
using System.Drawing;
using System.Runtime.CompilerServices;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Ink;
using System.Windows.Input;
using System.Windows.Media.Imaging;
using System.Windows.Shapes;

using GMap.NET;
using GMap.NET.MapProviders;
using GMap.NET.WindowsForms.Markers;
using GMap.NET.WindowsPresentation;

namespace localisation_app2
{
    /// <summary>
    /// Logique d'interaction pour MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();

            //Afficher();
        }

        private void Button_Click(object sender, RoutedEventArgs e)
        {
            double lat = Convert.ToDouble(2.8);
            double longe = Convert.ToDouble(3.8);

            PointLatLng point = new PointLatLng(lat, longe);
            mapView.Position = new GMap.NET.PointLatLng((double)lat, (double)longe);
            mapView.ShowCenter = true;


            GMap.NET.WindowsPresentation.GMapMarker mark = new GMap.NET.WindowsPresentation.GMapMarker(new
                GMap.NET.PointLatLng((double)lat, (double)longe));
            mark.Shape = new System.Windows.Controls.Image
            {
                Width = 30,
                Height = 30,
                Source = new BitmapImage(new Uri("pack://application:,,,/Asset/Icons/red-dot.png"))
            };

            mapView.Markers.Add(mark);





        }




        /* private void Afficher()
         {
             mapView.DragButton = (System.Windows.Forms.MouseButtons)MouseButton.Right;
             mapView.MapProvider = GMapProviders.GoogleMap;
             double lat = Convert.ToDouble(1.8);
             double longe = Convert.ToDouble(2.8);

             mapView.Position = new PointLatLng(lat, longe);
             mapView.MinZoom = 5;
             mapView.MaxZoom = 100;
             // whole world zoom
             mapView.Zoom = 10;
         } */


        private async void mapView_Loaded(object sender, RoutedEventArgs e)
        {
            double lat = Convert.ToDouble(1.8);
            double longe = Convert.ToDouble(2.8);
            mapView.MapProvider = GMap.NET.MapProviders.GoogleMapProvider.Instance;
            GMap.NET.GMaps.Instance.Mode = GMap.NET.AccessMode.ServerOnly;
            mapView.MinZoom = 2;
            mapView.MaxZoom = 17;
            // whole world zoom
            mapView.Zoom = 2;
            // lets the map use the mousewheel to zoom
            mapView.MouseWheelZoomType = GMap.NET.MouseWheelZoomType.MousePositionAndCenter;
            // lets the user drag the map
            mapView.CanDragMap = true;
            // lets the user drag the map with the left mouse button
            //mapView.DragButton = MouseButton.Left;

            GMap.NET.WindowsPresentation.GMapMarker mark = new GMap.NET.WindowsPresentation.GMapMarker(new
                GMap.NET.PointLatLng(lat, longe));
            mark.Shape = new System.Windows.Controls.Image
            {
                Width = 30,
                Height = 30,
                Source = new BitmapImage(new Uri("pack://application:,,,/Asset/Icons/markers.gif"))
            };

            mapView.Markers.Add(mark);

        }






        private void mapView_MouseLeftButtonDown(object sender, MouseButtonEventArgs e)
        {
            System.Windows.Point clickpoint = e.GetPosition(mapView);

            mapView.MapProvider = GMap.NET.MapProviders.GoogleMapProvider.Instance;
            GMap.NET.GMaps.Instance.Mode = GMap.NET.AccessMode.ServerOnly;
            //GMapMarker newmarker = new GMapMarker(mapView.Position);
            //newmarker.Position = mapView.FromLocalToLatLng((int)clickpoint.X, (int)clickpoint.Y);


            GMap.NET.WindowsPresentation.GMapMarker mark = new GMap.NET.WindowsPresentation.GMapMarker(new 
                GMap.NET.PointLatLng((double)clickpoint.X, (double)clickpoint.Y));
            mark.Shape = new System.Windows.Controls.Image
            {
                Width = 30,
                Height = 30,
                Source = new BitmapImage(new Uri("pack://application:,,,/Asset/Icons/red-dot.png"))
            };

            /*marker.Shape = new Ellipse
            {
                Width = 10,
                Height = 10,
                Stroke = Brushes.Black,
                StrokeThickness = 1.5
            };

            mapView.Markers.Add(mark);*/
        }

    }
}
