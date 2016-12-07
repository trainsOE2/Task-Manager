from django.conf.urls import url
from . import views

app_name = 'Tasks'

urlpatterns = [
    url(r'^$', views.index, name='index'),

    url(r'^(?P<job_id>[0-9]+)/$', views.detail, name='detail' ),

    url(r'^(?P<job_id>[0-9]+)/achieved/$', views.achieved, name='achieved' ),


]
