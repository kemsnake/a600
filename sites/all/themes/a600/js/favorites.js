(function($) {
  /**
   * @file
   * JS support for favorites.
   */

  /**
   * Create variables and functions.
   */
  Drupal.favorites = {
    /**
     * Reads the form data and passes it to the Ajax callback.
     * Drupal's "ahah" extensions would make it too complicated
     * dynamically processing the form AND rebuilding the
     * favorites list.
     */
    add: function() {
      jQuery.ajax({
        url: Drupal.settings.favorites.addCallbackPath,
        dataType: 'json',
        type: 'POST',
        data: Drupal.favorites.extractFormData(),
        error: function(a, b, c) {
          alert('An error occured.\n\nStatus:\n' + b + '\n\nMessage:\n' + c);
        },
        success: function(data) {
          Drupal.favorites.rebuild(data);
          $('form#custom-a600-add-favorite-form .form-submit').attr('class', 'favorite')
        }
      });
    },
    extractFormData: function() {
      return {
        path: Drupal.settings.favorites.path,
        query: Drupal.settings.favorites.query,
        title: $('form#custom-a600-add-favorite-form input[name=title]').val()
      };
    },
    rebuild: function(data) {
        Drupal.detachBehaviors($('div#favorites-list'));
        $('div#favorites-list').html(data.list);
        Drupal.attachBehaviors($('div#favorites-list'));
    },
    remove: function(caller) {
      jQuery.ajax({
        url: caller.attr('href').replace(/\?.*$/,''),
        dataType: 'json',
        data: caller.attr('href').replace(/^.*?\?/,'') + '&js=1',
        error: function(a, b, c) {
          alert('An error occured.\n\nStatus:\n' + b + '\n\nMessage:\n' + c);
        },
        success: function(data) {
            console.log('success');
            console.log(data);
          Drupal.favorites.rebuild(data);
        }
      });
    }
  }

  /**
   * Init dynamic link extensions.
   */
  Drupal.behaviors.favoritesLinks = {
    attach: function(context) {
      var ua = navigator.userAgent,
      event = (ua.match(/iPad/i)) ? "touchstart" : "click"; //Если имеем дело с iPad - touchstart, иначе - событие click;

      $('a.favorites-remove:not(.js-processed)',context).bind(event, function(event){
        Drupal.favorites.remove($(this));
        event.preventDefault();
      }).addClass('js-processed');
      // We need to suppress any native submit options for the form before we add
      $('form#custom-a600-add-favorite-form .form-submit:not(.js-processed)', context).bind(event,function(event){
        Drupal.favorites.add();
        event.preventDefault();
      }).addClass('js-processed');
    }
  }
})(jQuery);
