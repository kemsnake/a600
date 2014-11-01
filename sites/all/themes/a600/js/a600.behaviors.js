(function ($) {

  /**
   * The recommended way for producing HTML markup through JavaScript is to write
   * theming functions. These are similiar to the theming functions that you might
   * know from 'phptemplate' (the default PHP templating engine used by most
   * Drupal themes including Omega). JavaScript theme functions accept arguments
   * and can be overriden by sub-themes.
   *
   * In most cases, there is no good reason to NOT wrap your markup producing
   * JavaScript in a theme function.
   */
  Drupal.theme.prototype.a600ExampleButton = function (path, title) {
    // Create an anchor element with jQuery.
    return $('<a href="' + path + '" title="' + title + '">' + title + '</a>');
  };

  /**
   * Behaviors are Drupal's way of applying JavaScript to a page. In short, the
   * advantage of Behaviors over a simple 'document.ready()' lies in how it
   * interacts with content loaded through Ajax. Opposed to the
   * 'document.ready()' event which is only fired once when the page is
   * initially loaded, behaviors get re-executed whenever something is added to
   * the page through Ajax.
   *
   * You can attach as many behaviors as you wish. In fact, instead of overloading
   * a single behavior with multiple, completely unrelated tasks you should create
   * a separate behavior for every separate task.
   *
   * In most cases, there is no good reason to NOT wrap your JavaScript code in a
   * behavior.
   *
   * @param context
   *   The context for which the behavior is being executed. This is either the
   *   full page or a piece of HTML that was just added through Ajax.
   * @param settings
   *   An array of settings (added through drupal_add_js()). Instead of accessing
   *   Drupal.settings directly you should use this because of potential
   *   modifications made by the Ajax callback that also produced 'context'.
   */
  Drupal.behaviors.a600ExampleBehavior = {
    attach: function (context, settings) {
      // By using the 'context' variable we make sure that our code only runs on
      // the relevant HTML. Furthermore, by using jQuery.once() we make sure that
      // we don't run the same piece of code for an HTML snippet that we already
      // processed previously. By using .once('foo') all processed elements will
      // get tagged with a 'foo-processed' class, causing all future invocations
      // of this behavior to ignore them.
      $('.some-selector', context).once('foo', function () {
        // Now, we are invoking the previously declared theme function using two
        // settings as arguments.
        var $anchor = Drupal.theme('a600ExampleButton', settings.myExampleLinkPath, settings.myExampleLinkTitle);

        // The anchor is then appended to the current element.
        $anchor.appendTo(this);
      });
    }
  };


  Drupal.behaviors.searchInit = {
    attach: function (context, settings) {
        //скрываем инпуты у фильтров поиска
       /* $('#edit-filters .form-type-radio input').hide();
        // раскрашиваем активные инпуты
        $('.form-type-radio:has(input)', context).each(function () {
            $(this).css('background', 'none');
        });
        $('.form-type-radio:has(input:checked)', context).each(function () {
            $(this).css('background', '#f2cda5');
        });*/

        // убираем ненужную обертку от ajax в результатах поиска
        $('#results-wrapper div .search-result').unwrap();

        $('#edit-count-bedroom .form-item-count-bedroom:has(input#edit-count-bedroom-all)').css("width", "85%");

        // прячем кнопку еще
        if (Drupal.settings.remove_more_text === true) {
            $('div.more-wrapper').hide();
        }

        // вставляем кнопки + и - для количества покупаемых проектов
        $('#edit-prices .form-type-textfield input').before('<div class="decrease-count">&#8211;</div>');
        $('#edit-prices .form-type-textfield input').after('<div class="increase-count">&#43;</div>');
        // обработчики кнопок + и -
        $('.increase-count', context).click(function () {
            var parent = $(this).parent();
            parent.children('input').each(function () {
                if (this.value < 10) {
                    this.value++;
                    var fieldset = $(this).parent().parent().parent();
                    var fieldset_id = fieldset.attr('id');
                    var item_price = parseInt(Drupal.settings.item_price);
                    var standard_price = parseInt(Drupal.settings.standard_price);
                    $('#' + fieldset_id + ' .price-wrapper .price').text(standard_price + item_price * (this.value-1));
                }

            });

        });
        $('.decrease-count', context).click(function () {
            var parent = $(this).parent();
            parent.children('input').each(function () {
                if (this.value >= 2) this.value--;
                var fieldset = $(this).parent().parent().parent();
                var fieldset_id = fieldset.attr('id');
                var item_price = parseInt(Drupal.settings.item_price);
                var standard_price = parseInt(Drupal.settings.standard_price);
                $('#' + fieldset_id + ' .price-wrapper .price').text(standard_price + item_price * (this.value-1));
            });
        });

        //$('#custom-a600-project-search .form-item-square select').selectmenu();

        $('a#load-more-link').die("click").live('click', function(){
            var href = $(this).attr("href");
            $.ajax({
                url: href,
                dataType: 'json',
                type: 'POST',
                error: function(a, b, c) {
                    console.log('An error occured.\n\nStatus:\n' + b + '\n\nMessage:\n' + c);
                },
                success: function(data) {
                    $('div.more-wrapper').hide();
                    $('fieldset#results-wrapper').append(data);
                }
            });
            return false;
        });

        var filters_fieldset = document.getElementById('edit-filters');
        var rect = filters_fieldset.getBoundingClientRect();
        console.log(rect);

        $('#custom-a600-project-search #edit-search-image').attr('style', 'display:block;top:' + (rect.top + 65) + 'px;left:' + (rect.right - 50) + 'px;');
        // отправляем форму создания оплаты в RBK Money
        $('form#custom-a600-project-pay-send-rbk-form').submit();



    }
  };

})(jQuery);
