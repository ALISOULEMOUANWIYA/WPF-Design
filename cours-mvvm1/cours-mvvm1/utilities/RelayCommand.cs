using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Input;

namespace cours_mvvm1.utilities
{
    internal class RelayCommand : ICommand
    {
        private readonly Action<Object> _execute;
        private readonly Func<Object, bool> _canExecute;

        public event EventHandler CanExecuteChanged
        {
            add { CommandManager.RequerySuggested += value;  }
            remove { CommandManager.RequerySuggested -= value; }
        }

        public RelayCommand(Action<Object> execute, Func<Object, bool> canExecute = null)
        {
            _execute = execute;
            _canExecute = canExecute;
        }

        public bool CanExecute(Object parametre) => _canExecute == null || _canExecute(parametre);
        public void Execute(Object parametre) =>  _execute(parametre);
    }
}
